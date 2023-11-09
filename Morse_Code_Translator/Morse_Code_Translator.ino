const int SHORT = 200;  // Durata unui punct (200 ms)
const int LONG = 700;   // Durata unei linii (700 ms)
const int DELAY = 500;  // Pauza între caractere (500 ms)
const int pin = 2;     // Pinul pentru LED

char text[200];        // Textul introdus de utilizator

void setup() {
  pinMode(pin, OUTPUT);  // Setează pinul ca ieșire
  Serial.begin(9600);    // Inițializează comunicarea serială
}

void dot() {
  digitalWrite(pin, HIGH);  // Aprinde LED-ul
  delay(SHORT);              // Așteaptă durata unui punct
  digitalWrite(pin, LOW);   // Stinge LED-ul
  delay(DELAY);              // Așteaptă pauza între caractere
  Serial.print(".");         // Afisează un punct
}

void dash() {
  digitalWrite(pin, HIGH);  // Aprinde LED-ul
  delay(LONG);               // Așteaptă durata unei linii
  digitalWrite(pin, LOW);   // Stinge LED-ul
  delay(DELAY);              // Așteaptă pauza între caractere
  Serial.print("-");         // Afisează o linie
}

void morse(char x) {
  x = tolower(x);            // Converteste caracterul la litera mica

  if (x == 'a') {
    dot();
    dash();
  } else if (x == 'b') {
    dash();
    dot();
    dot();
    dot();
  } else if (x == 'c') {
    dash();
    dot();
    dash();
    dot();
  } else if (x == 'd') {
    dash();
    dot();
    dot();
  } else if (x == 'e') {
    dot();
  } else if (x == 'f') {
    dot();
    dot();
    dash();
    dot();
  } else if (x == 'g') {
    dash();
    dash();
    dot();
  } else if (x == 'h') {
    dot();
    dot();
    dot();
    dot();
  } else if (x == 'i') {
    dot();
    dot();
  } else if (x == 'j') {
    dot();
    dash();
    dash();
    dash();
  } else if (x == 'k') {
    dash();
    dot();
    dash();
  } else if (x == 'l') {
    dot();
    dash();
    dot();
    dot();
  } else if (x == 'm') {
    dash();
    dash();
  } else if (x == 'n') {
    dash();
    dot();
  } else if (x == 'o') {
    dash();
    dash();
    dash();
  } else if (x == 'p') {
    dot();
    dash();
    dash();
    dot();
  } else if (x == 'q') {
    dash();
    dash();
    dot();
    dash();
  } else if (x == 'r') {
    dot();
    dash();
    dot();
  } else if (x == 's') {
    dot();
    dot();
    dot();
  } else if (x == 't') {
    dash();
  } else if (x == 'u') {
    dot();
    dot();
    dash();
  } else if (x == 'v') {
    dot();
    dot();
    dot();
    dash();
  } else if (x == 'w') {
    dot();
    dash();
    dash();
  } else if (x == 'x') {
    dash();
    dot();
    dot();
    dash();
  } else if (x == 'y') {
    dash();
    dot();
    dash();
    dash();
  } else if (x == 'z') {
    dash();
    dash();
    dot();
    dot();
  }

  Serial.print(" ");         // Afisează un spațiu între caractere
}

void loop() {
  if (Serial.available() > 0) {
    // Citește textul introdus de utilizator din Monitorul Serial
    int i = 0;
    while (Serial.available() > 0) {
      text[i] = Serial.read();
      i++;
      delay(10);  // Mică întârziere pentru stabilitate
    }
    text[i] = '\0';  // Termină șirul de caractere cu NULL

    // Procesează textul introdus
    for (int j = 0; j < strlen(text); j++) {
      morse(text[j]);
      delay(500);
    }

    // Golește bufferul de intrare
    while (Serial.available() > 0) {
      Serial.read();
    }
    Serial.println();  // Afișează o linie nouă pentru o mai bună citire
  }
}
