void setup() {
  Serial.begin(9600); // initialize serial communication for debugging
  randomSeed(analogRead(A0)); // seed the random number generator with an analogRead
}

void loop() {
  // simulate a dice roll (random number between 1 and 6)
  int diceRoll = random(1, 7);

  // print the dice roll to the Serial Monitor
  Serial.println(diceRoll);

  delay(5000); // wait for a second
}
