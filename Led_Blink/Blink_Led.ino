// Blink_Led
#include <Arduino.h>

void setup() {
  // Seteaza pinul 2 ca iesire
  pinMode(3, OUTPUT);
}

void loop() {
  // Aprinde LED-ul
  digitalWrite(3, HIGH);
  // Asteapta 1 secunda (1000 milisecunde)
  delay(1000);
  // Stinge LED-ul
  digitalWrite(3, LOW);
  // Asteapta 1 secunda (1000 milisecunde)
  delay(1000);
}
