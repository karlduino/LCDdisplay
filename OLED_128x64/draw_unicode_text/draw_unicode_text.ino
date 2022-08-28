// write on 128x64 OLED display with unicode

#include "lcdgfx.h"

DisplaySSD1306_128x64_I2C display(-1); // or (-1,{busId, addr, scl, sda, frequency})

void setup()
{
    display.begin();
    display.fill( 0x00 );
        
    display.setFreeFont( free_calibri11x12, free_calibri11x12_latin );
    

    display.printFixed (30,  0, u8"CO2 monitor", STYLE_NORMAL);
   
    display.printFixed (0, 20, u8"CO2 is 845 ppm");
    display.printFixed (0, 38, u8"temp is 79 °F");
    display.printFixed (0, 52, u8"humidity is 53%");
   
}

void loop() { }
