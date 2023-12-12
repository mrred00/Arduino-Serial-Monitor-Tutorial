#include <Arduino.h>
#include <Serial.h>

// Sabit integer değerleri tanımla
const int sabitInteger1 = 10;
const int sabitInteger2 = 20;
const int sabitInteger3 = 30;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Sabit değerleri ekrana yazdır
  Serial.print("Sabit Integer 1: ");
  Serial.println(sabitInteger1);
  Serial.print("Sabit Integer 2: ");
  Serial.println(sabitInteger2);
  Serial.print("Sabit Integer 3: ");
  Serial.println(sabitInteger3);

  // 1 saniye bekleyerek değerleri güncelleme
  delay(1000);
}
