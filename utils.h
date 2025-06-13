#ifndef UTILS_H
#define UTILS_H

typedef int KeySym;
typedef int KeyCode;

#define NoSymbol 0

int IsModifierKey(KeySym keysym);
const char* XKeysymToString(KeySym keysym);

KeySym XStringToKeysym(const char* s);

#endif