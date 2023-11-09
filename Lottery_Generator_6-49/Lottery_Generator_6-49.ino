void setup() {
  Serial.begin(9600); // initialize serial communication for debugging
}

void loop() {
  // generate and print 6 random numbers between 1 and 49
  for (int i = 0; i < 6; i++) {
    int randomNumber = random(1, 50);
    Serial.print(randomNumber);
    
    if (i < 5) {
      Serial.print(", "); // print a comma and space between numbers
    }
  }

  Serial.println(); // move to the next line for better readability

  delay(1000); // wait for a second
}
