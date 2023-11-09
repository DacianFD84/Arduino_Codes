// Defineste pinii LED
const int ledPins[] = {2, 3, 4, 5, 6, 7};

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));

  // Seteaza pinii LED ca IESIRE
  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  const int bufferSize = 10;
  char inputBuffer[bufferSize];
  int index = 0;

  // Citeste caracterele din Serial Monitor pana la newline sau sfarsitul bufferului
  while (Serial.available() > 0 && index < bufferSize - 1) {
    char incomingChar = Serial.read();
    inputBuffer[index] = incomingChar;
    index++;
    delay(2);  // mica intarziere pentru a permite umplerea bufferului Serial
  }

  inputBuffer[index] = '\0';  // Termina sirul cu caracterul nul

  // Verifica daca input-ul este "dice"
  if (strcmp(inputBuffer, "dice\n") == 0) {
    // Simuleaza o aruncare de zar (numar aleatoriu intre 1 si 6)
    int diceRoll = random(1, 7);

    Serial.println("Received: " + String(inputBuffer));
    
    // Afiseaza rezultatul aruncarii zarului pentru depanare
    Serial.println("Dice roll: " + String(diceRoll));

    // Activeaza numarul corespunzator de LED-uri
    for (int i = 0; i < diceRoll; i++) {
      digitalWrite(ledPins[i], HIGH);
    }

    // Afiseaza un mesaj pentru depanare
    Serial.println("LEDs ON");

    // Asteapta 3 secunde
    delay(3000);

    // Dezactiveaza toate LED-urile
    for (int i = 0; i < 6; i++) {
      digitalWrite(ledPins[i], LOW);
    }

    // Afiseaza un mesaj pentru depanare
    Serial.println("LEDs OFF");

    // Afiseaza input-ul primit pentru depanare (o singura data dupa procesare)
    // Serial.println("Received: " + String(inputBuffer));
  }
}
