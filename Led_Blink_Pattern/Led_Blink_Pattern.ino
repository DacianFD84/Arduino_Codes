const int ledPin = 2; // Numărul pinului pentru LED

void setup() {
  pinMode(ledPin, OUTPUT); // Setează pinul LED ca ieșire
}

void loop() {
  // Model de clipire
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH); // Aprinde LED-ul
    delay(500); // Așteaptă 0.5 secunde
    digitalWrite(ledPin, LOW); // Stinge LED-ul
    delay(500); // Așteaptă 0.5 secunde
  }

  delay(2000); // Așteaptă 2 secunde înainte de următorul model
}
