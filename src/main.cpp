#include <Arduino.h>

#include "interface.h"

#include "PS2Mouse.h"

PS2Mouse mouse(18,5);

// put function declarations here:
extern "C" int xmain();

const int X1 = 1100;
const int X2 = 4700;
const int Y1 = 2200;
const int Y2 = 4600;
const int WIDTH = X2 - X1;
const int HEIGHT = Y2 - Y1;

void setup() {
  Serial.begin(9600);
  //xmain();
  mouse.begin(true);
  recognition_setup(WIDTH, HEIGHT);
}

bool started = false;
int last_x, last_y;

static int clamp(int v, int min, int max) {
  return v < min ? min : v > max ? max : v;
}

void loop() {
  uint8_t pstat;
  int px,py,pz;
  mouse.getAbsPosition(pstat,px,py,pz);

  bool pressed = !!(pstat & 0b100000);
  int x = clamp(py, X1, X2) - X1;
  int y = clamp(px, Y1, Y2) - Y1;

  bool update = true;
  if (pressed && !started) {
    started = true;
    recognition_start(last_x = x, last_y = y);
  } else if (started && !pressed) {
    recognition_end(last_x, last_y);
    started = false;
  } else if (started && (last_x != x || last_y != y)) {
    recognition_move(last_x = x, last_y = y);
  } else {
    update = false;
  }

  if (update) {
    switch (recognition_get_result()) {
      case KEY_PRESSED:
        Serial.printf("KEY! %s\n", recognition_get_key());
        break;
      case BUTTON_PRESSED:
        Serial.printf("BUTTON! %d\n", recognition_get_button());
        break;
      case MODE_CHANGE:
        int p; const char *s;
        recognition_get_mode(&p, &s);
        Serial.printf("MODE: %s %s\n", s, p? "lock" : "shift");
        break;
    }
  }
  delay(20);
}
