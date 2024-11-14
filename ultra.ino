int trigPin=2;
int echoPin=4;
int buzzerPin =7;
long duration;
float distance;



void setup() {
  serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(4,INPUT);
  pinMode(7,OUTPUT);
  
}

void loop() {
  digitalwrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  serial.print("Distance:  ");
  serial.print(distance);
  serial.print("cm");
  if (distance<50)
   {
    digitalWrite(buzzerPin,LOW);
  }
  else
  {
    digitalWrite(BuzzerPin,HIGH);
  }

}
