void setup()
{
  // Inițializarea pinilor pentru LED-uri (2, 3, 4 și 5)
  for (int i = 2; i <= 5; i++)
    pinMode(i, OUTPUT);
}

void loop()
{
  // Ciclul prin LED-urile 2, 3, 4 și 5
  for (int i = 2; i <= 5; i++)
  {
    // Aprinderea LED-ului curent
    digitalWrite(i, HIGH);
    delay(1000); // Așteptare 1000 de milisecunde
    // Stingerea LED-ului curent
    digitalWrite(i, LOW);
    delay(1000); // Așteptare 1000 de milisecunde
  }
}
