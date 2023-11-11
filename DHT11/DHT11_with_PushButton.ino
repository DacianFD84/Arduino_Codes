#include <DHT.h>

#define DHTPIN 2
#define BUTTON_PIN 5

#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    // Button is pressed, read and print sensor data
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();

    Serial.println("Temperature = " + String(temperature) + " °C");
    Serial.println("Humidity = " + String(humidity) + " %");

    // Wait for a short time to avoid rapid readings
    delay(1000);
  }
}
