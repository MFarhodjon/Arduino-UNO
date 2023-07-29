int IRPin=2;
int ledPin=8;

void setup() {
  // put your setup code here, to run once:
pinMode(IRPin,INPUT);
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(IRPin)==0){
  digitalWrite(ledPin,HIGH);
}else{
  digitalWrite(ledPin,LOW);
}
}
