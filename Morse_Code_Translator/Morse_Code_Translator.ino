const int SHORT = 200;
const int LONG = 700;
const int DELAY = 500;
const int pin = 2;

char text[200];

void setup() {
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
}

void dot() {
  digitalWrite(pin, HIGH);
  delay(SHORT);
  digitalWrite(pin, LOW);
  delay(DELAY);
  Serial.print(".");
}

void dash() {
  digitalWrite(pin, HIGH);
  delay(LONG);
  digitalWrite(pin, LOW);
  delay(DELAY);
  Serial.print("-");
}

void morse(char x) {
  x = tolower(x);

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

  Serial.print(" ");
}

void loop() {
  if (Serial.available() > 0) {
    // Read the input from the Serial Monitor
    int i = 0;
    while (Serial.available() > 0) {
      text[i] = Serial.read();
      i++;
      delay(10);  // Small delay for stability
    }
    text[i] = '\0';  // Null-terminate the array

    // Process the entered text
    for (int j = 0; j < strlen(text); j++) {
      morse(text[j]);
      delay(500);
    }

    // Clear the input buffer
    while (Serial.available() > 0) {
      Serial.read();
    }
    Serial.println();  // Print a new line for better readability
  }
}
