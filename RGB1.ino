int led1 =3;
int led2 =5;
int led3 =6;
void setup() {
  pinMode(led2,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led3,OUTPUT);

}

void loop() {
  analogWrite(led1,128);
  delay(500);
  analogWrite(led2,64);
  delay(1000);
  analogWrite(led3,128);
  delay(500);
  
}
