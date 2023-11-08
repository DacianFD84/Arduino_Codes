int buzzer = 12;  // Pinul pentru buzzer-ul activ

void setup() {
  pinMode(buzzer, OUTPUT);  // Initializeaza pinul buzzer-ului ca iesire
}

void loop() {
  unsigned char i;

  while (1) {  // Acesta creeaza un loop infinit
    // Output un frecventa
    for (i = 0; i < 80; i++) {
      digitalWrite(buzzer, HIGH);
      delay(1);  // Asteapta 1ms
      digitalWrite(buzzer, LOW);
      delay(1);  // Asteapta 1ms
    }

    // Output o alta frecventa
    for (i = 0; i < 100; i++) {
      digitalWrite(buzzer, HIGH);
      delay(2);  // Asteapta 2ms
      digitalWrite(buzzer, LOW);
      delay(2);  // Asteapta 2ms
    }
  }
}
