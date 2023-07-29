int blue=3,green=5,red=6;
//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  lcd.init();                      // initialize the lcd 
  lcd.init();
  
  lcd.backlight();
  int a=0;
}


void loop()
{
  a=a+5
  if(a==255){a=0;}
  analogWrite(red,205);
  analogWrite(green,100);
  analogWrite(blue,50);
  lcd.print("Salom dunyo ");
  delay(1000);
}
