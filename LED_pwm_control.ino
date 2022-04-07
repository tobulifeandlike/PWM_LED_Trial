int x = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = x; i>0; i--){
    digitalWrite(7,HIGH);
    delayMicroseconds(i);
    digitalWrite(7,LOW);
    delayMicroseconds(1000-i); 
  }

}
