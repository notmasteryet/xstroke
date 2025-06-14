const fs = require('fs');
const child_process = require('child_process');

const alphabet = fs.readFileSync("./conf/alphabet").toString().split("\n").filter(i => {
    i = i.trim();
    return i.length > 0 && i.charAt(0) != "#"
}).join("\n");

var regsMap = {};
var regs = [];

var t = alphabet.replace(/(grid|anchor|doc)\s*\("(.*?)"\)/g, (all, t, content) => {
  if (t == "doc") return "";
  if (!(content in regsMap)) {
    regsMap[content] = regs.length;
    regs.push(content);
  }
  return `${t[0]}${regsMap[content]}`;
});

t = t.replace(/\{\s*([ag]\d+)\s*\}/g, "$1");
t = t.replace(/\{\s*\}/g, "");
t = t.replace(/^Key\s+\w+\s*=\s*$/gm, "");

var modes = [];
t = t.replace(/\bMode\s+"([^"]*)"\s*(?::\s*([^{]+))?\{([^}]+)\}/g, (all, id, parents, content) => {
  var p = parents ? parents.split(",").map(s => s.trim().slice(1,-1)) : [];
  var c = content.split(/\n/g).filter(s => s.trim() != "").map(s => {
    const p = s.split("=");
    if (p.length != 2) throw new Error("unexpected content: " + JSON.stringify(s));
    const actions = p[0].split(",").map(s => s.trim());
    return {actions, re: p[1].trim()};
  });
  modes.push({id, parents:p, content:c,});
  return "";
});
//console.log(t);

var lex_c = regs.map((re, i) => {
    let f = true;
    let expr = "";
    for (let j = 0; j < re.length; j++) {
        let ch = re[j];
        if (f && ch >= "0" && ch <= "9") {
            expr += "\"" + ch + "\"";
        } else {
            expr += ch;
            if (ch == "[") f = false;
            else if (ch == "]") f = true;
        }
    }
    expr += "[\x00]";
    return `
int lex_g${i}(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ${expr} { return 0; }
        *           { return 1; }
    */
}
`;
}).join("");

fs.writeFileSync("./conf/lex_regs.src.c", lex_c);
child_process.execFileSync("re2c", ["./conf/lex_regs.src.c", "-o", "./conf/lex_regs.c"]);

var mod_c = modes.map(m => {
  const parents = m.parents.map(p => {
    return `rec_mode_add_parent(mode, rec_get_mode(rec, "${p}"));`;
  });
  const entries = m.content.map(i => {
    if (i.re[0] != "g") throw new Error("Unknown engine: " + i.re);
    const fd = `
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_${i.re});
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    `;
    const actions = i.actions.map(s => {
      const p = s.split(' ');
      let action_item;
      switch (p[0]) {
        case "Key": action_item = `action_item_key_init(&action_item, "${p[1]}", 1);`; break;
        case "OrientationCorrection": action_item = `action_item_orient_init(&action_item, ${+p[1] * Math.PI / 180});`; break;
        case "Button": action_item = `action_item_button_init(&action_item, ${p[1]});`; break;
        case "ModeLock": action_item = `action_item_mode_init(&action_item, rec_get_mode(rec, ${p[1]}), 1);`; break;
        case "ModeShift": action_item = `action_item_mode_init(&action_item, rec_get_mode(rec, ${p[1]}), 0);`; break;
        default: throw new Error("unknown action: " + s);
      }
      return `${action_item}
    action_add_item(&action, action_item);`;
    });
    return fd + `
    action_init(&action);
    ` + actions.join('\n') + `
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    `;
  });
  return `
    // Mode ${m.id}
    mode = rec_get_mode(rec, "${m.id}");
    ${parents.join(" ")}
    ${entries.join("")}
  `;
}).join("");
var init_c = `
//#include "rec.h"

int rec_parse_static(rec_t *rec) {
    struct rec_engine * eng;
    struct rec_mode * mode, mode2;
    void* feature_data;
    feature_t feature;
    feature_list_t feature_list;
    gesture_t gesture;
    action_t action;
    action_item_t action_item;

    // Engine grid { Option "TapDrift" "6" }
    eng = rec_get_engine(rec, "grid");
    rec_engine_set_option(eng, "TapDrift", "6");

    ${mod_c}

    return 0;
}
`;
//console.log(init_c);
fs.writeFileSync("./conf/init_rec.c", init_c);
console.log("./conf/ files written");
