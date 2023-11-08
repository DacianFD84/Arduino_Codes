int buzzerPin = 3; // Pinul digital conectat la buzzer

// Define the frequency and duration for each note
int notes[] = {262, 262, 294, 262, 349, 330, 262, 262, 294, 262, 392, 349, 262, 262, 523, 440, 349, 330, 294, 466, 466, 440, 349, 392, 349};
int durations[] = {200, 200, 400, 400, 400, 800, 200, 200, 400, 400, 400, 800, 200, 200, 400, 400, 400, 400, 800, 200, 200, 400, 400, 400, 800};

void setup() {
  pinMode(buzzerPin, OUTPUT); // Setează pinul buzzerului ca ieșire
}

void loop() {
  // Play "Happy Birthday" melody
  for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++) {
    tone(buzzerPin, notes[i], durations[i]);
    delay(durations[i] * 1.3); // Adding a slight pause after each note
    noTone(buzzerPin);
    delay(50); // Short pause between notes
  }
  delay(2000); // Pause before the melody repeats
}

// 262 Hz: Nota C4 (do din octavele joase)
// 294 Hz: Nota D4 (re din octavele joase)
// 349 Hz: Nota F4 (fa din octavele joase)
// 330 Hz: Nota E4 (mi din octavele joase)
// 392 Hz: Nota G4 (sol din octavele joase)
// 523 Hz: Nota C5 (do din octavele mijlocii)
// 440 Hz: Nota A4 (la din octavele mijlocii)
// 466 Hz: Nota A#4/Bb4 (la bemol din octavele mijlocii)
// Acestea sunt doar câteva dintre notele muzicale din melodie, iar fiecare notă este reprezentată prin frecvența sa corespunzătoare în hertzi. 
// În cadrul unui cod Arduino care utilizează aceste frecvențe cu funcția tone(), fiecare notă va fi redată la frecvența corespunzătoare pentru a crea melodia dorită.







