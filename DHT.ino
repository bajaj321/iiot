include<DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
dht.begin();
}
void loop() {
  // put your main code here, to run repeatedly:
float h = dht.readHumidity();
float t = dht.readTemperature();
if(isnan(h)||isnan(t)){
  Serial.println("failed to read DHT sensor");
  return;
}
Serial.print("Humidity:");
Serial.print(h);
Serial.print("%Temperature:");
Serial.print(t);
Serial.print("c");
}
