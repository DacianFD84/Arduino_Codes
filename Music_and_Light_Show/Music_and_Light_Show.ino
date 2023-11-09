const int buzzerPin = 2; // Connect the buzzer to this pin
const int ledPins[] = {3, 4, 5, 6}; // Connect LEDs to these pins

void setup() {
  pinMode(buzzerPin, OUTPUT);
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  playMelody();
  lightShow();
  delay(1000); // Pause between melodies
}

void playMelody() {
  int melody[] = {262, 294, 330, 349, 392, 440, 494}; // Frequencies for C4 to B4
  int noteDuration = 500; // in milliseconds

  for (int i = 0; i < 7; i++) {
    tone(buzzerPin, melody[i], noteDuration);
    delay(noteDuration + 50); // Add a small delay between notes
  }

  noTone(buzzerPin); // Turn off the buzzer after playing the melody
}

void lightShow() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on the LED
    delay(250); // Light duration
    digitalWrite(ledPins[i], LOW); // Turn off the LED
  }
}
