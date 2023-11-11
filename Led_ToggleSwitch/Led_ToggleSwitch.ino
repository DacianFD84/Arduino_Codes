const int ledPin = 4;   Defineste o constanta pentru pinul LED, care este conectat la pinul 4 al Arduino

void setup() {
  pinMode(ledPin, OUTPUT);   Seteaza pinul 4 ca fiind un pin de iesire
  digitalWrite(ledPin, HIGH);   Seteaza pinul 4 la nivelul logic HIGH (LED-ul este aprins)
}

void loop() {
   Codul principal al programului tau (daca exista) ar trebui sa fie aici
}
