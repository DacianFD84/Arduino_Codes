// Sets all digital pins from 2 to 13 as OUTPUT and HIGH in the setup() function. 

void setup() {
  // Set all digital pins as OUTPUT and HIGH
  for (int pin = 2; pin <= 13; ++pin) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, HIGH);
  }
}

void loop() {
  // No need for anything in the loop, pins will stay HIGH
}
