#include "DHT22.h"
#define DHT22_PIN 2

DHT22 dht22(DHT22_PIN);

void setup() {
  Serial.begin(115200);
}

void loop() {
  float h  = dht22.getHumidity();
  float t = dht22.getTemperature();

 Serial.print("h=");Serial.print(h,1);Serial.print("\t");
 Serial.print("t=");Serial.println(t,1);
 delay(2000);
}