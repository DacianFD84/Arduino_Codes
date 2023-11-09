const int buzzerPin = 10; // Conectează buzzer-ul la pinul 10

void setup() {
  pinMode(buzzerPin, OUTPUT); // Setează pinul buzzer-ului ca ieșire
}

void loop() {
  playKittTheme();
}

void playKittTheme() {
  // Note muzicale pentru melodia KITT
  int kittMelody[] = {NOTE_D5, NOTE_FS5, NOTE_A5, NOTE_D6, NOTE_A5, NOTE_FS5, NOTE_D5, NOTE_FS5};
  
  // Duratele notelor corespunzătoare melodie KITT
  int kittNoteDurations[] = {4, 4, 4, 4, 4, 4, 4, 4};
  
  // Redă melodia
  for (int i = 0; i < 8; i++) {
    tone(buzzerPin, kittMelody[i], 1000 / kittNoteDurations[i]);
    delay(1000 / kittNoteDurations[i] + 30); // Adaugă o mică pauză între note
  }
  
  // Oprește sunetul
  noTone(buzzerPin);
  
  delay(1000); // Așteaptă o scurtă pauză între redări
}
