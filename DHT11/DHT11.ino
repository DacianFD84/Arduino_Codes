#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 2

// Se definește tipul de senzor utilizat
#define DHTTYPE DHT11

// Se declară un obiect de tip DHT
// Este necesar să se transmită ca parametri la constructor
// a obiectului pinul și tipul de senzor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);

  // Se inițializează senzorul DHT11
  dht.begin();
}

void loop() {
  // Se obține temperatura și umiditatea de la senzor și se afișează
  // pe monitorul serial
  Serial.println("Temperatura = " + String(dht.readTemperature()) + " °C");
  Serial.println("Umiditate = " + String(dht.readHumidity()) + " %");

  // Se așteaptă 10 secunde înainte de a trece din nou prin buclă
  delay(10000);
}
