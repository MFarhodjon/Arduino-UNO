void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,1);
digitalWrite(10,1);
delay(3000);
digitalWrite(2,0);
digitalWrite(10,0);
delay(500);
digitalWrite(3,1);
delay(500);
digitalWrite(3,0);
delay(500);
digitalWrite(4,1);
digitalWrite(11,1);
delay(3000);
digitalWrite(4,0);
digitalWrite(11,0);
delay(500);


}
