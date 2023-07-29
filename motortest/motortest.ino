//Right wheel 1
const int motorpin1=5;
const int motorpin2=6;
//Left wheel 
const int motorpin3=9;
const int motorpin4=10;


void setup() {
  // put your setup code here, to run once:
pinMode(motorpin1,OUTPUT); 
pinMode(motorpin2,OUTPUT);
pinMode(motorpin3,OUTPUT);
pinMode(motorpin4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(motorpin1,1);
digitalWrite(motorpin2,1);
digitalWrite(motorpin3,1);
digitalWrite(motorpin4,1);
}
