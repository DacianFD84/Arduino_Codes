const int headsLedPin = 2;  // Pin number for the Heads LED
const int tailsLedPin = 3;  // Pin number for the Tails LED
const int pushButtonPin = 13;  // Pin number for the push button
unsigned long lastButtonPressTime = 0;  // Variable to track the time of the last button press

void setup() {
  Serial.begin(9600); // initialize serial communication for debugging
  pinMode(headsLedPin, OUTPUT);  // Set the Heads LED pin as an output
  pinMode(tailsLedPin, OUTPUT);  // Set the Tails LED pin as an output
  pinMode(pushButtonPin, INPUT_PULLUP);  // Set the push button pin as input with internal pull-up resistor
}

void loop() {
  // Check if the push button is pressed
  if (digitalRead(pushButtonPin) == LOW) {
    // Check if it's been at least 3 seconds since the last button press
    if (millis() - lastButtonPressTime >= 3000) {
      // Simulate a coin flip (random number 0 or 1)
      int coinResult = analogRead(A0) & 1;  // Use the least significant bit for randomness

      // Print the coin flip result to the Serial Monitor
      if (coinResult == 0) {
        Serial.println("Heads");
        digitalWrite(headsLedPin, HIGH);  // Turn on the Heads LED
        digitalWrite(tailsLedPin, LOW);   // Turn off the Tails LED
      } else {
        Serial.println("Tails");
        digitalWrite(headsLedPin, LOW);   // Turn off the Heads LED
        digitalWrite(tailsLedPin, HIGH);  // Turn on the Tails LED
      }

      delay(3000); // Wait for 3 seconds

      // Turn off both LEDs
      digitalWrite(headsLedPin, LOW);
      digitalWrite(tailsLedPin, LOW);

      lastButtonPressTime = millis(); // Record the time of the button press
    }
  }
}
