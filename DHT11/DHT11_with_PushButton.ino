#include <DHT.h>

#define DHTPIN 2            // Definirea pinului la care este conectat senzorul DHT
#define BUTTON_PIN 5        // Definirea pinului la care este conectat butonul

#define DHTTYPE DHT11       // Definirea tipului de senzor (DHT11 in acest caz)

DHT dht(DHTPIN, DHTTYPE);   // Crearea unui obiect DHT cu pinul si tipul specificate

void setup() {
  Serial.begin(9600);       // Inițializarea comunicării seriale la 9600 bps
  dht.begin();              // Inițializarea senzorului DHT
  pinMode(BUTTON_PIN, INPUT_PULLUP);  // Configurarea pinului butonului ca intrare cu rezistență de pull-up
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    // Butonul este apăsat, citirea și afișarea datelor de la senzor
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();

    Serial.println("Temperatura = " + String(temperature) + " °C");
    Serial.println("Umiditate = " + String(humidity) + " %");

    // Așteptare pentru o perioadă scurtă pentru a evita citiri rapide
    delay(1000);
  }
}
