int button_state = 0;
void setup() {
  
 pinMode(13,OUTPUT);//led
 pinMode(4,OUTPUT);//button
 serial.begin(9600);
 }

void loop() {
  button_state=digitalRead(4);
  serial.print("BUTTON VALUE :HIGH");
  serial.println(button_state);
  delay(100);
  if (button_state == HIGH)
  digitalWrite(13,HIGH);
  else
  digitalWrite(13,LOW);
}
  
 
  
 

}
