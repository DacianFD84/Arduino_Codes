// Definim pinul pentru LED
int ledPin = 2; // Numărul pinului pentru LED

void setup() {
  // Setăm pinul LED ca ieșire
  pinMode(ledPin, OUTPUT); // Setează pinul LED ca ieșire
}

void loop() {
  // Fade in
  // Crestere treptata a luminozitatii
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledPin, brightness);
    delay(10); // Ajustăm întârzierea pentru viteza de creștere
  }

  // Fade out
  // Scădere treptată a luminozitatii
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness);
    delay(10); // Ajustăm întârzierea pentru viteza de scădere
  }
}
