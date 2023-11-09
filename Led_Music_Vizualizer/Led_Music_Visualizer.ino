const int numLEDs = 10;      // Number of LEDs in the visualizer
const int analogPin = A0;    // Connect the microphone or audio input to this pin
const int threshold = 100;   // Adjust the threshold based on ambient noise

void setup() {
  pinMode(analogPin, INPUT);
  for (int i = 2; i <= 2 + numLEDs; i++) {
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
  while (!Serial); // Wait for the serial monitor to open
}

void loop() {
  int sensorValue = analogRead(analogPin);

  if (sensorValue > threshold) {
    int mappedValue = map(sensorValue, threshold, 1023, 0, numLEDs);
    displayVisualizer(mappedValue);
  } else {
    turnOffLEDs();
  }
}

void displayVisualizer(int numLitLEDs) {
  for (int i = 2; i <= 2 + numLEDs; i++) {
    if (i <= numLitLEDs + 2) {
      digitalWrite(i, HIGH);
    } else {
      digitalWrite(i, LOW);
    }
  }
}

void turnOffLEDs() {
  for (int i = 2; i <= 2 + numLEDs; i++) {
    digitalWrite(i, LOW);
  }
}
