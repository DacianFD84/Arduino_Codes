/*
 * Led_Flash
 * Porneste secvential LED-urile de la 1 la 6, apoi le stinge in ordine inversa, creand un model in bucla
 */

int delayTime = 200;
int ledPin;

void setup()
{
  for (ledPin = 1; ledPin < 7; ledPin++) // Seteaza secvential pinii 1~6 ca mod de iesire
  { 
    pinMode(ledPin, OUTPUT); // Seteaza pinul ledPin ca mod de iesire
  }
}

void loop()
{
  for (ledPin = 1; ledPin < 7; ledPin++) // La fiecare delayTime, porneste secvential LED-urile 1~6
  {
    digitalWrite(ledPin, HIGH); // Porneste LED-ul conectat la pinul ledPin
    delay(delayTime); // Asteapta delayTime milisecunde
  }

  for (ledPin = 6; ledPin > 0; ledPin--) // La fiecare delayTime, stinge secvential LED-urile 6~1
  {
    digitalWrite(ledPin, LOW); // Stinge LED-ul conectat la pinul ledPin
    delay(delayTime); // Asteapta delayTime milisecunde
  }
}
