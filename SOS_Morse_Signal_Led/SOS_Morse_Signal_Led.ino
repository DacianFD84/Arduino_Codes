// Proiect 2 - Semnalizator Morse pentru SOS
// LED-ul este conectat la pinul digital 2
int ledPin = 2;

// Rulează o singură dată, la începutul programului
void setup()
{
  // Setează pinul digital ca ieșire
  pinMode(ledPin, OUTPUT);
}

// Rulează în mod repetat
void loop()
{
  // 3 puncte (dit)
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(ledPin, HIGH); // Aprinde LED-ul
    delay(150);                  // Așteaptă 150ms
    digitalWrite(ledPin, LOW);  // Stinge LED-ul
    delay(100);                  // Așteaptă 100ms
  }

  // Așteaptă 100ms pentru a crea o mică pauză între litere
  delay(100);

  // 3 linii (dah)
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(ledPin, HIGH); // Aprinde LED-ul
    delay(400);                  // Așteaptă 400ms
    digitalWrite(ledPin, LOW);  // Stinge LED-ul
    delay(100);                  // Așteaptă 100ms
  }

  // Așteaptă 100ms pentru a crea o mică pauză între litere
  delay(100);

  // 3 puncte (dit) din nou
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(ledPin, HIGH); // Aprinde LED-ul
    delay(150);                  // Așteaptă 150ms
    digitalWrite(ledPin, LOW);  // Stinge LED-ul
    delay(100);                  // Așteaptă 100ms
  }

  // Așteaptă 5 secunde înainte de a repeta semnalul SOS
  delay(5000);
}
