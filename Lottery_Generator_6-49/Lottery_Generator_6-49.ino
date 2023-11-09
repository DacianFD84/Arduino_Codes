void setup() {
  Serial.begin(9600); // initialize serial communication for debugging

  // Seed the random number generator with analog noise
  randomSeed(analogRead(A0));

  // Add a delay to allow the random seed to change
  delay(1000);
}

void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n'); // read the input until a newline character is received

    if (input == "generate") {
      int generatedNumbers[6];

      // generate 6 random numbers between 1 and 49
      for (int i = 0; i < 6; i++) {
        generatedNumbers[i] = random(1, 50);
      }

      // Print the generated numbers on one line
      Serial.print("Loto 6/49 : ");
      for (int i = 0; i < 6; i++) {
        Serial.print(generatedNumbers[i]);

        if (i < 5) {
          Serial.print(", "); // print a comma and space between numbers
        }
      }

      Serial.println(); // move to the next line for better readability
    }
  }

  // Your other code or delays can go here if needed
}
