// Blink_Led

void setup() {
  // Seteaza pinul 2 ca iesire
  pinMode(2, OUTPUT);
}

void loop() {
  // Aprinde LED-ul
  digitalWrite(2, HIGH);
  // Asteapta 1 secunda (1000 milisecunde)
  delay(1000);
  // Stinge LED-ul
  digitalWrite(2, LOW);
  // Asteapta 1 secunda (1000 milisecunde)
  delay(1000);
}
