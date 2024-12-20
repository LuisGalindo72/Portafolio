#include <SimpleDHT.h>
#define SENSOR 7

SimpleDHT11 sensor;

void setup() {
  pinMode(SENSOR, INPUT);
  Serial.begin(9600);
  Serial.println("SENSOR STARTED");
}

void loop() {
  Serial.println("Reading the sensor...");
  byte temperature = 0;
  byte humidity = 0;
  byte data[40] = {0};

  if (sensor.read(SENSOR, &temperature, &humidity, data)) {
    Serial.println("There was an error reading!");
  } else {
    Serial.println("... Sensor readed!");
    Serial.print("Temperature: ");
    Serial.print((int)temperature);
    Serial.println(" °C");
    Serial.print("Humidity: ");
    Serial.print((int)humidity);
    Serial.println(" %");
    Serial.println("###########");
  }
  delay(5000);
}