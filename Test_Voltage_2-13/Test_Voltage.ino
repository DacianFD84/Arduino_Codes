// Setează toate piniile digitale de la 2 la 13 ca ieșire și HIGH în funcția setup().

void setup() {
  // Setează toți piniile digitale ca ieșire și HIGH
  for (int pin = 2; pin <= 13; ++pin) {
    pinMode(pin, OUTPUT); // Setează pinul ca ieșire
    digitalWrite(pin, HIGH); // Setează pinul ca HIGH
  }
}

void loop() {
  // Nu este nevoie de nimic în bucla, piniile vor rămâne HIGH
}
