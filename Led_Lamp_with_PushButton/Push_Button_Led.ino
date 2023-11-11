const int pushButtonPin = 13;  // Pin number for the push button
const int ledPin = 2;         // Pin number for the LED

void setup() {
  Serial.begin(9600); // initialize serial communication for debugging
  pinMode(pushButtonPin, INPUT_PULLUP);  // Set the push button pin as input with internal pull-up resistor
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
}

void loop() {
  // Check if the push button is pressed
  if (digitalRead(pushButtonPin) == LOW) {
    Serial.println("Button pressed");
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    delay(1000); // Add a small delay to debounce the button
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED if the button is not pressed
  }
}
