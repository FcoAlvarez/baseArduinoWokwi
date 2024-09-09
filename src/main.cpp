#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  Serial.println("Iniciando Arduino....");
  Serial.println("Iniciado...")
}

void loop()
{
  Serial.println("Loop...");
  delay(1000);
}
