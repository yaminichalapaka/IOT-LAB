int l[]=13,12,11,10,9,8,7,6;
int i;
void setup() {
  // put your setup code here, to run once:
  for(i=0;i<=7;i++)
pinMode(l[i],OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 for(i=0;i<=7:i++){
   digitalWrite(l[i],HIGH);
   delay(100);
   digitalWrite(l[i],LOW);
   delay(100);
}
