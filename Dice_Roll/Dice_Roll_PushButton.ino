const int ledPins[] = {2, 3, 4, 5, 6, 7};
const int buttonPin = 13;  // Pin for the push button

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));

  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  pinMode(buttonPin, INPUT_PULLUP);  // Set the button pin as input with internal pull-up resistor
}

void loop() {
  // Check if the button is pressed
  if (digitalRead(buttonPin) == LOW) {
    // Simulate a dice roll (random number between 1 and 6)
    int diceRoll = random(1, 7);

    Serial.println("Dice roll: " + String(diceRoll));

    // Activate the corresponding number of LEDs
    for (int i = 0; i < diceRoll; i++) {
      digitalWrite(ledPins[i], HIGH);
    }

    Serial.println("LEDs ON");

    // Wait for 3 seconds
    delay(3000);

    // Deactivate all LEDs
    for (int i = 0; i < 6; i++) {
      digitalWrite(ledPins[i], LOW);
    }

    Serial.println("LEDs OFF");
  }
}
