/*
    Project name : ESP8266 Temperature and humidity sensor module DHT 11 DHT22
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-temperature-and-humidity-sensor-module-dht-11-dht22
*/

#include <DHT.h>

// Define the type of DHT sensor (DHT11 or DHT22)
#define DHTTYPE DHT11 // Change this to DHT22 if you're using that sensor

// Pin connected to the DHT sensor
const int dhtPin = D4; // GPIO pin D4 on NodeMCU

// Initialize DHT sensor object
DHT dht(dhtPin, DHTTYPE);

void setup() {
  Serial.begin(9600); // Initialize serial communication
  dht.begin(); // Initialize DHT sensor
}

void loop() {
  // Wait a few seconds between measurements
  delay(2000);

  // Read temperature as Celsius (default)
  float temperature = dht.readTemperature();

  // Read humidity (%)
  float humidity = dht.readHumidity();

  // Check if any reads failed
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print temperature and humidity values to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
}
