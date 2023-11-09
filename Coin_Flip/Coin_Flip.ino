void setup() {
  Serial.begin(9600); // initialize serial communication for debugging
  randomSeed(analogRead(A0)); // seed the random number generator with an analogRead
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');

    // Check if the entered command is "flip"
    if (command.equals("flip")) {
      // simulate a coin flip (random number 0 or 1)
      int coinResult = random(2);

      // print the coin flip result to the Serial Monitor
      if (coinResult == 0) {
        Serial.println("Heads");
      } else {
        Serial.println("Tails");
      }
    }
  }

  // Uncomment the line below if you want to continue with the continuous coin flips
  // delay(100); // wait for a short time before checking again
}
