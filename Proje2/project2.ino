#include <Arduino.h>
#include <Serial.h>

int integer1, integer2, integer3;

void setup() {
  Serial.begin(9600);

  Serial.println("Lütfen ilk integer değeri girin: ");
  while(!Serial.available());
  integer1 = Serial.parseInt();
  Serial.println("Lütfen ikinci integer değeri girin: ");
  while(!Serial.available());
  integer2 = Serial.parseInt();
  Serial.println("Lütfen üçüncü integer değeri girin: ");
  while(!Serial.available());
  integer3 = Serial.parseInt();
}

void loop() {
  Serial.print("Integer 1: ");
  Serial.println(integer1);
  Serial.print("Integer 2: ");
  Serial.println(integer2);
  Serial.print("Integer 3: ");
  Serial.println(integer3);

  delay(1000);
}
