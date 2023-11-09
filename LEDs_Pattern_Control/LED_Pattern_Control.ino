// Arduino code to control 4 LEDs in a specific pattern with delays

// Definirea pinilor pentru LED-uri
const int LedRedPin = 2;    // Pinul pentru LED-ul rosu
const int LedBluePin = 3;   // Pinul pentru LED-ul albastru
const int LedYellowPin = 4; // Pinul pentru LED-ul galben
const int LedWhitePin = 5;  // Pinul pentru LED-ul alb

void setup() {
  // Initialize each LED pin as an output
  pinMode(LedRedPin, OUTPUT); // Seteaza pinul LedRedPin ca iesire
  pinMode(LedBluePin, OUTPUT); // Seteaza pinul LedBluePin ca iesire
  pinMode(LedYellowPin, OUTPUT); // Seteaza pinul LedYellowPin ca iesire
  pinMode(LedWhitePin, OUTPUT); // Seteaza pinul LedWhitePin ca iesire
}

void loop() {
  // Define the LED states for each line
  int ledStates[][4] = {
    {1, 1, 1, 1},
    {1, 1, 1, 0},
    {1, 1, 0, 1},
    {1, 1, 0, 0},
    {1, 0, 1, 1},
    {1, 0, 1, 0},
    {1, 0, 0, 1},
    {1, 0, 0, 0},
    {0, 1, 1, 1},
    {0, 1, 1, 0},
    {0, 1, 0, 0},
    {0, 1, 0, 1},
    {0, 0, 1, 1},
    {0, 0, 1, 0},
    {0, 0, 0, 1},
    {0, 0, 0, 0}
  };

  int numLines = sizeof(ledStates) / sizeof(ledStates[0]); // Calculeaza numarul de linii

  // Iterate through each line
  for (int i = 0; i < numLines; ++i) {
    // Set the LEDs based on the current line
    digitalWrite(LedRedPin, ledStates[i][0] ? HIGH : LOW); // Seteaza LedRedPin in functie de linia curenta
    digitalWrite(LedBluePin, ledStates[i][1] ? HIGH : LOW); // Seteaza LedBluePin in functie de linia curenta
    digitalWrite(LedYellowPin, ledStates[i][2] ? HIGH : LOW); // Seteaza LedYellowPin in functie de linia curenta
    digitalWrite(LedWhitePin, ledStates[i][3] ? HIGH : LOW); // Seteaza LedWhitePin in functie de linia curenta

    // Delay for 2000 milliseconds
    delay(2000); // Asteapta 2000 de milisecunde
  }
}
