int f;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
f=analogRead(A0);
Serial.println(f);
delay(500);
if(f>250){
  digitalWrite(2,1);
}
else{
  digitalWrite(2,0);
}
}
