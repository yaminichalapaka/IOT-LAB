int led = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led,0);
  delay(1000);
  analogWrite(led,64);
  delay(1000);
  analogWrite(led,128);
  delay(1000);
  analogWrite(led,192);
  delay(1000);
  analogWrite(led,255);
  delay(1000);

}
