void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2,INPUT);
pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(digitalRead(2));
if(digitalRead(2)==1){digitalWrite(4,1);}
else{digitalWrite(4,0);}
}
