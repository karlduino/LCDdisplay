/* write on 128x64 OLED display with unicode */

#include "lcdgfx.h"

DisplaySSD1306_128x64_I2C display(-1); // or (-1,{busId, addr, scl, sda, frequency})

void setup()
{
    /* Replace the line below with display.128x32_i2c_init() if you need to use 128x32 display */
    display.begin();
    display.fill(0x00);
    display.setFixedFont(ssd1306xled_font6x8);
    display.printFixed (30,  0, "CO2 monitor", STYLE_NORMAL);
    display.printFixed (0, 20, "CO2 is 845 ppm", STYLE_NORMAL);
    display.printFixed (0, 38, "temp is 79 deg F", STYLE_NORMAL);
    display.printFixed (0, 52, "humidity is 53%", STYLE_NORMAL);
}


void loop()
{
}
