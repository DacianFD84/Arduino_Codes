int buzzer = 12;  // The pin of the active buzzer

void setup() {
  pinMode(buzzer, OUTPUT);  // Initialize the buzzer pin as an output
}

void loop() {
  unsigned char i;

  while (1) {  // This creates an infinite loop
    // Output a frequency
    for (i = 0; i < 80; i++) {
      digitalWrite(buzzer, HIGH);
      delay(1);  // Wait for 1ms
      digitalWrite(buzzer, LOW);
      delay(1);  // Wait for 1ms
    }

    // Output another frequency
    for (i = 0; i < 100; i++) {
      digitalWrite(buzzer, HIGH);
      delay(2);  // Wait for 2ms
      digitalWrite(buzzer, LOW);
      delay(2);  // Wait for 2ms
    }
  }
}
