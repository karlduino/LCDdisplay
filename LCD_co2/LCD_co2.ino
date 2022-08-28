//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <string.h>

#if defined(ARDUINO) && ARDUINO >= 100
#define printByte(args)  write(args);
#else
#define printByte(args)  print(args,BYTE);
#endif

uint8_t subscript[8] = {0x0, 0x0, 0x0, 0x1E, 0x03, 0x06, 0x0C, 0x1F };
// uint8_t subscript[8] = {0x0, 0x0, 0x1E, 0x03, 0x06, 0x0C, 0x1F, 0x00};
uint8_t heart[8] = {0x0,0xa,0x1f,0x1f,0xe,0x4,0x0};


LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display


void setup()
{
  lcd.init();
  lcd.backlight();

  lcd.createChar(0, heart);
  lcd.createChar(1, subscript);
  lcd.home();

  char buffer[17];
  int co2 = 589;
  sprintf(buffer, "%4d ppm CO", co2);

  lcd.setCursor(0,0);
  lcd.print(buffer);

  lcd.setCursor(11,0);
  lcd.printByte(1);

  int temp = 79;
  sprintf(buffer, "%3d", temp);
  lcd.setCursor(1,1);
  lcd.print(buffer);
  lcd.setCursor(4,1);
  lcd.print((char)223); // degree symbol
  lcd.setCursor(5,1);
  lcd.print("F");

  int humidity = 49;
  sprintf(buffer, "%3d", humidity);
  lcd.setCursor(7,1);
  lcd.print(buffer);
  lcd.setCursor(10,1);
  lcd.print("% hum.");

}


void loop()
{
}
