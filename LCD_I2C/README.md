## 16x2 LCD display with I2C backpack

- bought [this one](https://amzn.to/3AwG3Z7) at Amazon
  (Jansane 16x2 1602 LCD display + I2C module interface adapter)

- Need [LiquidCrystal_I2C]() library

- uses address `0x27` (which is the default in the library)

- connect GND to GND, VCC to 5V (or 3.3V?), SDA to A4 on Uno, SCL to
  A5 on Uno (SDA=A4 and SCL=A5 on the Arduino Nano, as well)

- **Really** need to adjust the potentiometer on the back, to change
the contrast


```c
#include <LiquidCrystal_I2C.h> // Library for LCD
LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 column and 2 rows
lcd.init(); //initialize the lcd
lcd.backlight(); //open the backlight
lcd.setCursor(column_index, row_index);
lcd.print("Hello World!");
```

- Note: there is no `lcd.printf`, but you can use `sprintf` and then
  pass the result to `lcd.print`. But `%f% isn't implemented for
  `sprintf` on arduino, you can just use integers.

  ```c
  char buffer[17];
  int value = 33;
  sprintf(buffer, "value = %3d", value);
  lcd.print(buffer);
  ```
