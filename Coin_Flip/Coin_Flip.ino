void setup() {
  Serial.begin(9600); // initialize serial communication for debugging
  randomSeed(analogRead(A0)); // seed the random number generator with an analogRead
}

void loop() {
  // simulate a coin flip (random number 0 or 1)
  int coinResult = random(2);

  // print the coin flip result to the Serial Monitor
  if (coinResult == 0) {
    Serial.println("Heads");
  } else {
    Serial.println("Tails");
  }

  delay(1000); // wait for a second
}
