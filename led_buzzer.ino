int led=9;
int btn=2;
int temp;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
  Serial.begin(9600);
}

void loop(){
  temp=digitalRead(btn);
  if(temp==1)
  digitalWrite(led,HIGH);
  else
  digitalWrite(led,LOW);
  Serial.print("value of button "); 
  Serial.println(temp);
  

}
