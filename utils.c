#include "utils.h"

#include <string.h>

const char *KEYS[] = {
  "Shift_L",
  "Control_L",
  "Meta_L",
  "Super_L",
  "Caps_Lock",
  "space",
  "0",
  "1",
  "2",
  "3",
  "4",
  "5",
  "6",
  "7",
  "8",
  "9",
  "a",
  "ampersand",
  "asciicircum",
  "asciitilde",
  "asterisk",
  "at",
  "b",
  "backslash",
  "BackSpace",
  "bar",
  "braceleft",
  "braceright",
  "bracketleft",
  "bracketright",
  "c",
  "colon",
  "comma",
  "d",
  "dollar",
  "Down",
  "e",
  "equal",
  "Escape",
  "exclam",
  "f",
  "g",
  "greater",
  "h",
  "i",
  "j",
  "k",
  "l",
  "Left",
  "less",
  "m",
  "minus",
  "n",
  "numbersign",
  "o",
  "p",
  "parenleft",
  "parenright",
  "percent",
  "period",
  "plus",
  "q",
  "question",
  "quotedbl",
  "quoteleft",
  "quoteright",
  "r",
  "Return",
  "Right",
  "s",
  "semicolon",
  "slash",
  "t",
  "Tab",
  "u",
  "underscore",
  "Up",
  "v",
  "w",
  "x",
  "y",
  "z",
  "A",
  "B",
  "C",
  "D",
  "E",
  "F",
  "G",
  "H",
  "I",
  "J",
  "K",
  "L",
  "M",
  "N",
  "O",
  "P",
  "Q",
  "R",
  "S",
  "T",
  "U",
  "V",
  "W",
  "X",
  "Y",
  "Z",
  NULL,
};

KeySym XStringToKeysym(const char* s)
{
    for (int i = 0; KEYS[i]; i++) {
        if (strcmp(KEYS[i], s) == 0) {
            return i + 1;
        }
    }
    return NoSymbol;    
}

int IsModifierKey(KeySym keysym)
{
    return 0;
}

const char* XKeysymToString(KeySym keysym)
{
    if (keysym == NoSymbol) {
        return "";
    }
    return KEYS[keysym - 1];
}
