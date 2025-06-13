#include <Arduino.h>

// put function declarations here:
extern "C" int xmain(int argc, const char *argv[]);

void setup() {
  Serial.begin(9600);
  xmain(0, nullptr);
}

void loop() {
  // put your main code here, to run repeatedly:
}
