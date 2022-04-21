int led1 =3;
int led2 =5;
int led3 =6;
void setup() {
  pinMode(led1,OUTPUT);

}

void loop() {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  delay(1000);
   digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  delay(1000);
    digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(1000);
}
  

