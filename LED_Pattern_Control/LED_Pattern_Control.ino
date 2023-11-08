// Arduino code to control 4 LEDs in a specific pattern with delays

const int LedRedPin = 2;    
const int LedBluePin = 3;   
const int LedYellowPin = 4; 
const int LedWhitePin = 5;  

void setup() {
  // Initialize each LED pin as an output
  pinMode(LedRedPin, OUTPUT);
  pinMode(LedBluePin, OUTPUT);
  pinMode(LedYellowPin, OUTPUT);
  pinMode(LedWhitePin, OUTPUT);
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

  int numLines = sizeof(ledStates) / sizeof(ledStates[0]);

  // Iterate through each line
  for (int i = 0; i < numLines; ++i) {
    // Set the LEDs based on the current line
    digitalWrite(LedRedPin, ledStates[i][0] ? HIGH : LOW);
    digitalWrite(LedBluePin, ledStates[i][1] ? HIGH : LOW);
    digitalWrite(LedYellowPin, ledStates[i][2] ? HIGH : LOW);
    digitalWrite(LedWhitePin, ledStates[i][3] ? HIGH : LOW);

    // Delay for 2000 milliseconds
    delay(2000);
  }
}
