#include<DHT.h>
#define DHTPIN 4
#define DHTTYpe DHT11
DHT dht(DHT PIN,DHT TYPE);

void setup() {
  dht.begin
  serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(23,OUTPUT);
  
  }

void loop() {
float h=dht.readHumidity();
float t=dht.readTemperature();
serial.print("Humidity");
serail.println(h);
serial.print("Temperature");
serail.println(t);
if (isnan(h) \\ isnan(t)){
  serial.println("failed");
  return;
}

if(t<28) {
  digitalWrite(2,HIGH);
  digitalWrite(23,LOW);
  serial.println("LED HIGH");
}
  else{
  digitalWrite(23,HIGH);
  digitalWrite(2,LOW);
  serial.println("LED LOW);
}
delay(2000)
}
