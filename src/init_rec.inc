
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

    
    // Mode __GLOBAL__
    mode = rec_get_mode(rec, "__GLOBAL__");
    
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g0);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "BackSpace", 1);
    action_add_item(&action, action_item);
action_item_orient_init(&action_item, 3.141592653589793);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g1);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Return", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g2);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Control_L", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g3);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Meta_L", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
  
    // Mode __FALLBACK__
    mode = rec_get_mode(rec, "__FALLBACK__");
    
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g4);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "space", 1);
    action_add_item(&action, action_item);
action_item_orient_init(&action_item, 0);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g5);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_button_init(&action_item, 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
  
    // Mode abc
    mode = rec_get_mode(rec, "abc");
    rec_mode_add_parent(mode, rec_get_mode(rec, "numbers_in_letter_mode")); rec_mode_add_parent(mode, rec_get_mode(rec, "punctuation_in_letter_mode")); rec_mode_add_parent(mode, rec_get_mode(rec, "no_capitals_in_lowercase_mode"));
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g1);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Return", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g6);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_mode_init(&action_item, rec_get_mode(rec, "Abc"), 0);
    action_add_item(&action, action_item);
action_item_key_init(&action_item, "Shift_L", 1);
    action_add_item(&action, action_item);
action_item_orient_init(&action_item, -1.5707963267948966);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g7);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_mode_init(&action_item, rec_get_mode(rec, "123"), 0);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g8);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_mode_init(&action_item, rec_get_mode(rec, "!@#"), 0);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g9);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Up", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g10);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Down", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g11);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Right", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g12);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Left", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g13);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "1", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g14);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "bar", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g15);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "a", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g16);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "a", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g17);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "b", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g18);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "b", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g19);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "c", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g20);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "t", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g21);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "d", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g22);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "d", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g23);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "d", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g24);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "e", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g25);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "e", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g26);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "f", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g27);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "f", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g28);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "i", 1);
    action_add_item(&action, action_item);
action_item_orient_init(&action_item, 1.5707963267948966);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g29);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "g", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g30);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "g", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g31);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "g", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g32);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "h", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g33);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "j", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g34);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "k", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g35);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "l", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g36);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "m", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g37);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "n", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g38);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "n", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g39);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "o", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g40);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "p", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g41);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "p", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g42);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "q", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g43);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "r", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g44);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "r", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g45);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "r", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g46);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "s", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g47);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "t", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g48);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "u", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g49);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "u", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g50);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "v", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g51);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "v", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g52);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "x", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g53);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "y", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g54);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "y", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g55);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "w", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g56);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "z", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
  
    // Mode Abc
    mode = rec_get_mode(rec, "Abc");
    rec_mode_add_parent(mode, rec_get_mode(rec, "abc"));
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g6);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_mode_init(&action_item, rec_get_mode(rec, "ABC"), 1);
    action_add_item(&action, action_item);
action_item_key_init(&action_item, "Caps_Lock", 1);
    action_add_item(&action, action_item);
action_item_orient_init(&action_item, -1.5707963267948966);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
  
    // Mode ABC
    mode = rec_get_mode(rec, "ABC");
    rec_mode_add_parent(mode, rec_get_mode(rec, "abc"));
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g6);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_mode_init(&action_item, rec_get_mode(rec, "abc"), 1);
    action_add_item(&action, action_item);
action_item_orient_init(&action_item, -1.5707963267948966);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
  
    // Mode 123
    mode = rec_get_mode(rec, "123");
    rec_mode_add_parent(mode, rec_get_mode(rec, "!@#"));
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g1);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Return", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g8);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_mode_init(&action_item, rec_get_mode(rec, "!@#"), 0);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g7);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_mode_init(&action_item, rec_get_mode(rec, "*123*"), 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g57);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "0", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g58);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "0", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g28);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "1", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g59);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "7", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g60);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "2", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g61);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "2", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g62);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "3", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g63);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "4", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g64);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "4", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g65);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "5", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g66);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "6", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g67);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "8", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g68);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "9", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
  
    // Mode *123*
    mode = rec_get_mode(rec, "*123*");
    rec_mode_add_parent(mode, rec_get_mode(rec, "123"));
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g7);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_mode_init(&action_item, rec_get_mode(rec, "abc"), 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
  
    // Mode !@#
    mode = rec_get_mode(rec, "!@#");
    rec_mode_add_parent(mode, rec_get_mode(rec, "punctuation_in_letter_mode"));
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g8);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_mode_init(&action_item, rec_get_mode(rec, "abc"), 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g5);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "period", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g1);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "comma", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g28);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "quoteright", 1);
    action_add_item(&action, action_item);
action_item_orient_init(&action_item, 1.5707963267948966);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g37);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "quotedbl", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g69);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "less", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g70);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "greater", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g71);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "bracketleft", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g72);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "bracketright", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g4);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "minus", 1);
    action_add_item(&action, action_item);
action_item_orient_init(&action_item, 0);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g73);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "slash", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g74);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "question", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g6);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "exclam", 1);
    action_add_item(&action, action_item);
action_item_orient_init(&action_item, -1.5707963267948966);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g75);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "braceleft", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g76);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "braceright", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g77);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "braceright", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g78);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "numbersign", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g19);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "parenleft", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g79);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "parenright", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g46);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "dollar", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g80);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "dollar", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g7);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "backslash", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g34);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "plus", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g56);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "equal", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g81);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "equal", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g82);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "underscore", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g52);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "asterisk", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g83);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "bar", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g84);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "semicolon", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g85);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "colon", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g27);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Tab", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g86);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Escape", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g87);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Escape", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g88);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "asciitilde", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g89);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "asciitilde", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g39);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "at", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g90);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "at", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g91);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "percent", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g67);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "ampersand", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g15);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "asciicircum", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g92);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "quoteleft", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
  
    // Mode no_capitals_in_lowercase_mode
    mode = rec_get_mode(rec, "no_capitals_in_lowercase_mode");
    
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g93);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "n", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g80);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "s", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g81);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "z", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g94);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "r", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g95);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "g", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g96);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "w", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g97);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "d", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g98);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "b", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g99);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "m", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g100);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "w", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g101);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "q", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g102);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "p", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g103);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "e", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g104);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "w", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g105);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "y", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g106);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "b", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
  
    // Mode capitals_in_lowercase_mode
    mode = rec_get_mode(rec, "capitals_in_lowercase_mode");
    
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g93);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "A", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g107);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "A", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g108);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "B", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g109);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "B", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g80);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "C", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g81);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "D", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g94);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "D", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g110);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "D", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g111);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "D", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g112);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "E", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g113);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "E", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g114);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "F", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g115);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "I", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g116);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "G", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g117);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "G", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g96);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "H", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g97);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "J", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g118);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "K", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g98);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "L", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g119);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "M", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g99);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "N", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g100);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "N", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g101);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "O", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g120);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "P", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g121);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "P", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g122);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Q", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g123);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "R", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g124);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "R", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g103);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "S", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g125);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "T", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g104);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "U", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g126);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "V", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g127);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "V", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g128);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "V", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g129);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "V", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g130);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "V", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g131);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "W", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g105);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "X", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g132);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Y", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g106);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Z", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
  
    // Mode numbers_in_letter_mode
    mode = rec_get_mode(rec, "numbers_in_letter_mode");
    
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g133);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "0", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g134);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "2", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g72);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "3", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g135);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "4", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g136);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "6", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g137);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "5", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g138);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "7", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g139);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "8", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g140);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "8", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g141);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "9", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g142);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "9", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
  
    // Mode punctuation_in_letter_mode
    mode = rec_get_mode(rec, "punctuation_in_letter_mode");
    
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g86);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Escape", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g143);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "Tab", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g144);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "period", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g145);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "comma", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g146);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "colon", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g147);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "exclam", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g148);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "minus", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g149);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "equal", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g150);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "question", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g151);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "underscore", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g152);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "plus", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g153);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "plus", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g154);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "plus", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g155);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "plus", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g156);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "bar", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g157);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "bar", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g158);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "bracketleft", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g159);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "bracketright", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g160);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "braceleft", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g161);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "braceright", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g162);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "less", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g163);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "greater", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g164);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "parenleft", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g165);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "parenright", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g166);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "quoteright", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g167);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "quoteright", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g168);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "quoteleft", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g169);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "quoteleft", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g170);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "quotedbl", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g84);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "semicolon", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g73);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "slash", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g171);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "percent", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g172);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "asciicircum", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g173);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "numbersign", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g174);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "asciitilde", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g175);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "asterisk", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g176);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "ampersand", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g177);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "at", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
    feature_data = rec_engine_feature_data_alloc(eng, (char*)(void*)lex_g178);
    feature.engine = eng;
    feature.data = feature_data;
    feature_list_init(&feature_list);
    feature_list_append(&feature_list, &feature);
    
    action_init(&action);
    action_item_key_init(&action_item, "dollar", 1);
    action_add_item(&action, action_item);
    gesture_init(&gesture, action, feature_list);
    rec_mode_add_gesture(mode, &gesture);
    
  

    return 0;
}
