#include <AFMotor.h>
AF_DCMotor motor4(4);
AF_DCMotor motor3(3);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
motor4.setSpeed(255);
motor4.run(FORWARD);
motor3.setSpeed(255);
motor3.run(FORWARD);
delay(3000);
}
