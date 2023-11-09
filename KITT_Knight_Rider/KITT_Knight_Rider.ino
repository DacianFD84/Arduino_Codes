const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9}; // Connect LEDs to these pins

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  knightRiderEffect(100); // Speed of the scanning motion (adjustable)
}

void knightRiderEffect(int speed) {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(speed);
    digitalWrite(ledPins[i], LOW);
  }

  for (int i = 6; i > 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(speed);
    digitalWrite(ledPins[i], LOW);
  }
}
