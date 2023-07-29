#include <IRremote.hpp>

const int IR_RECEIVE_PIN=7;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
IrReceiver.begin(IR_RECEIVE_PIN,ENABLE_LED_FEEDBACK);
}

void loop() {
  // put your main code here, to run repeatedly:
if(IrReceiver.decode()){
  Serial.println(IrReceiver.decodedIRData.decodedRawData,HEX);
  delay(1500);
  IrReceiver.resume();
}
}
