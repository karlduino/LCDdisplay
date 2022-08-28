//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <string.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();

  char buffer[17];
  int co2 = 589;
  sprintf(buffer, "%4d ppm CO₂", co2);

  lcd.setCursor(0,0);
  lcd.print(buffer);

  int temp = 79;
  sprintf(buffer, "%3d", temp);
  lcd.setCursor(0,1);
  lcd.print(buffer);
  lcd.setCursor(4,1);
  lcd.print("°F");

  int humidity = 49;
  sprintf(buffer, "%3d", humidity);
  lcd.setCursor(8,1);
  lcd.print(buffer);
  lcd.setCursor(11,1);
  lcd.print("%");
}


void loop()
{
}
