int buzzerPin = 3; // Pinul digital conectat la buzzer
int ledPins[] = {2, 4, 5}; // Pini digitali conectați la LED-uri PWM

int notes[] = {262, 262, 294, 262, 349, 330, 262, 262, 294, 262, 392, 349, 262, 262, 523, 440, 349, 330, 294, 466, 466, 440, 349, 392, 349};
int durations[] = {200, 200, 400, 400, 400, 800, 200, 200, 400, 400, 400, 800, 200, 200, 400, 400, 400, 400, 800, 200, 200, 400, 400, 400, 800};

void setup() {
  pinMode(buzzerPin, OUTPUT); // Setează pinul buzzerului ca ieșire

  // Setează pini pentru LED-uri ca ieșiri PWM
  for (int i = 0; i < sizeof(ledPins) / sizeof(ledPins[0]); i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Redă melodia "Happy Birthday" cu fade pentru LED-uri
  for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++) {
    int duration = durations[i];
    int fadeDuration = duration / 2; // Durata de fade va fi jumătate din durata notei

    // Activează LED-urile cu fade
    for (int j = 0; j < sizeof(ledPins) / sizeof(ledPins[0]); j++) {
      analogWrite(ledPins[j], 0); // Porneste fade-ul de la 0 (LED stins)
      for (int k = 0; k <= 255; k += 5) {
        analogWrite(ledPins[j], k);
        delay(fadeDuration / 255); // Pas de timp pentru fade
      }
    }

    // Redă nota
    tone(buzzerPin, notes[i], duration);
    delay(fadeDuration); // Așteaptă pentru a lăsa fade-ul să continue în timpul notei

    // Oprește sunetul
    noTone(buzzerPin);

    // Dezactivează LED-urile cu fade
    for (int j = 0; j < sizeof(ledPins) / sizeof(ledPins[0]); j++) {
      for (int k = 255; k >= 0; k -= 5) {
        analogWrite(ledPins[j], k);
        delay(fadeDuration / 255); // Pas de timp pentru fade
      }
      analogWrite(ledPins[j], 0); // Stinge complet LED-ul la sfârșitul notei
    }

    delay(50); // Pauză scurtă între note
  }

  delay(2000); // Pauză înainte de repetarea melodiei
}
