void setup() {
  pinMode(9,OUTPUT);
  pinMode(14,OUTPUT);
   

}

void loop() {
  for (int i=0;i<5;i++)
{
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  delay(1000);
}
{
  digitalWrite(14,HIGH);
  delay(1000);
  digitalWrite(14,LOW);
}
 }
