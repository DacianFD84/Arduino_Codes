const int pushButtonPin = 13;  // Pin number for the push button
const int ledPin = 2;         // Pin number for the LED

unsigned long buttonPressTime = 0;  // Variable to store the time when the button was pressed

void setup() {
  Serial.begin(9600); // initialize serial communication for debugging
  pinMode(pushButtonPin, INPUT_PULLUP);  // Set the push button pin as input with internal pull-up resistor
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
}

void loop() {
  // Check if the push button is pressed
  if (digitalRead(pushButtonPin) == LOW) {
    if (buttonPressTime == 0) {
      buttonPressTime = millis();  // Record the time when the button is first pressed
    }

    // Check if the button has been pressed for 500 milliseconds
    if (millis() - buttonPressTime >= 500) {
      Serial.println("Button pressed for 500 milliseconds");
      digitalWrite(ledPin, !digitalRead(ledPin));  // Toggle the state of the LED
      buttonPressTime = 0;  // Reset the button press time
      delay(500);  // Add a small delay to debounce the button
    }
  } else {
    buttonPressTime = 0;  // Reset the button press time if the button is not pressed
  }
}
