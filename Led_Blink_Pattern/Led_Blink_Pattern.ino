const int ledPin = 2; // Pin number for the LED

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  // Blink pattern
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
    delay(500); // Wait for 0.5 seconds
    digitalWrite(ledPin, LOW); // Turn off the LED
    delay(500); // Wait for 0.5 seconds
  }

  delay(2000); // Wait for 2 seconds before the next pattern
}
