#include "arduino.h"

//#define BLINKING_LED RED
#define BLINKING_LED GREEN
//#define BLINKING_LED BLUE

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, world!");

  pin_mode(BLINKING_LED, OUTPUT);
}

void loop() {
  digitalWrite(BLINKING_LED, LOW);
  delay(500);
  digitalWrite(BLINKING_LED, HIGH);
  delay(500);
}