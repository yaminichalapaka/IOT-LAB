int led1 = 10;
int led2 = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT
  
  


}

void loop() {
  // put your main code here, to run repeatedly:
  if (led1 == HIGH) {
    digitalWrite(led1,HIGH);
   
    digitalWrite(led2,LOW);
    delay(1000);
  }
  else {
    digitalWrite(led2,HIGH);
   
    digitalWrite(led1,LOW);
    delay(1000);

}
}
