const int EN =9;
const int in1=12;
const int in2= 13;
void setup() {
  pinMode(EN,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  // stope the motor
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(EN,LOW);
  }

void loop() {
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(EN,255);
  delay(2000);

  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(EN,127);
  delay(2000);
  
  digitalWrite(in1,LOW);
  digitalWrite(EN,0);
  delay(2000);
  }
