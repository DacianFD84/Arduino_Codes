// Blink_Led

void setup() {
  pinMode(2, OUTPUT); // Set pin 2 as an output
}

void loop() {
  digitalWrite(2, HIGH); // Turn on the LED
  delay(1000); // Wait for 1 second (1000 milliseconds)
  digitalWrite(2, LOW); // Turn off the LED
  delay(1000); // Wait for 1 second (1000 milliseconds)
}
