int w;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
w=analogRead(A0);
Serial.println(w);
if(w>200){digitalWrite(2,1);digitalWrite(3,0);Serial.println("Stakanda suv mavjud");}
else{digitalWrite(3,1);digitalWrite(2,0);Serial.println("Suv aniqlanmadi");}
delay(3000);
}
