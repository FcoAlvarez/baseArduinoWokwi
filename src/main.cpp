#include <Arduino.h>


void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando Arduino....");
}

void loop() {
  Serial.println("Loop...");
  delay(1000);
}
