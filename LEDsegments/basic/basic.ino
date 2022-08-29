// basic LED segments
// I bought [DORHEA TM1637 0.56" 4 bits digital LED display](https://amzn.to/3PXDXab)

#include <TM1637.h>

// Instantiation and pins configurations
// Pin 3 - > DIO
// Pin 2 - > CLK
TM1637 tm(3, 2);

void setup()
{
    tm.begin();
    tm.setBrightness(3);
}

void loop()
{
    // Display Integers:
    tm.display(1234);
    delay(1000);

    // Display float:
    tm.display(29.65);
    delay(1000);

    // Display String:
    tm.display("PLAY");
    delay(1000);
    tm.display("STOP");
    delay(1000);
}