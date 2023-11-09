const int numLEDs = 4;      // Number of LEDs in the Simon Says game
const int ledPins[numLEDs] = {2, 3, 4, 5}; // Connect LEDs to these pins
const int buttonPins[numLEDs] = {6, 7, 8, 9}; // Connect buttons to these pins
const int sequenceMaxLength = 10; // Maximum length of the sequence

int sequence[sequenceMaxLength]; // Array to store the generated sequence
int playerSequence[sequenceMaxLength]; // Array to store the player's entered sequence
int sequenceLength = 0; // Current length of the sequence

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
}

void loop() {
  generateSequence();
  displaySequence();
  getPlayerInput();
  checkPlayerInput();
}

void generateSequence() {
  for (int i = 0; i < sequenceMaxLength; i++) {
    sequence[i] = random(0, numLEDs);
  }
  sequenceLength = 0;
}

void displaySequence() {
  for (int i = 0; i < sequenceLength; i++) {
    int ledIndex = sequence[i];
    digitalWrite(ledPins[ledIndex], HIGH);
    delay(500);
    digitalWrite(ledPins[ledIndex], LOW);
    delay(250);
  }
}

void getPlayerInput() {
  for (int i = 0; i < sequenceLength; i++) {
    for (int j = 0; j < numLEDs; j++) {
      if (digitalRead(buttonPins[j]) == LOW) {
        playerSequence[i] = j;
        while (digitalRead(buttonPins[j]) == LOW) {
          // Wait for the button release
        }
        delay(250); // Pause between button presses
      }
    }
  }
}

void checkPlayerInput() {
  for (int i = 0; i < sequenceLength; i++) {
    if (playerSequence[i] != sequence[i]) {
      // Incorrect input, display a pattern to indicate failure
      displayIncorrectPattern();
      delay(1000); // Pause before restarting
      return;
    }
  }

  // Player successfully replicated the sequence
  sequenceLength++;
  if (sequenceLength == sequenceMaxLength) {
    // Player completed the game, display a victory pattern
    displayVictoryPattern();
    delay(1000); // Pause before restarting
    sequenceLength = 0;
  }
}

void displayIncorrectPattern() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numLEDs; j++) {
      digitalWrite(ledPins[j], HIGH);
    }
    delay(250);
    for (int j = 0; j < numLEDs; j++) {
      digitalWrite(ledPins[j], LOW);
    }
    delay(250);
  }
}

void displayVictoryPattern() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numLEDs; j++) {
      digitalWrite(ledPins[j], HIGH);
      delay(100);
      digitalWrite(ledPins[j], LOW);
      delay(100);
    }
    delay(500);
  }
}
