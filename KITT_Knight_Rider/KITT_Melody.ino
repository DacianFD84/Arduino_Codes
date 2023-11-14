const int buzzerPin = 10;


void setup() {
  pinMode(buzzerPin, OUTPUT); 
}

void loop() {
  playKittTheme();
}

void playKittTheme() {
  
  int kittMelody[] = {NOTE_D5, NOTE_FS5, NOTE_A5, NOTE_D6, NOTE_A5, NOTE_FS5, NOTE_D5, NOTE_FS5};
  
  int kittNoteDurations[] = {4, 4, 4, 4, 4, 4, 4, 4};
  
  
  
  for (int i = 0; i < 8; i++) {
    tone(buzzerPin, kittMelody[i], 1000 / kittNoteDurations[i]);
    delay(1000 / kittNoteDurations[i] + 30); 
  }
  
  
  noTone(buzzerPin);
  
  delay(1000); 
}
