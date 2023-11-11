const int pushButtonPin = 13;  // Pin number for the push button

void setup() {
  Serial.begin(9600); // initialize serial communication for debugging
  pinMode(pushButtonPin, INPUT_PULLUP);  // Set the push button pin as input with internal pull-up resistor
}

void loop() {
  // Check if the push button is pressed
  if (digitalRead(pushButtonPin) == LOW) {
    Serial.println("HIGH");
    delay(1000); // Add a small delay to debounce the button
  }
}
