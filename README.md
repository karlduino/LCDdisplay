## LCD displays

I have two LCD shields, one from adafruit (RGB LCD shield) and one
from dfRobot. They have different interfaces.

The adafruit one requires the Adafruit RGB LCD Shield library.

I also have a [dfrobot LCD4884 shield](https://www.dfrobot.com/product-347.html), which needs [this library](https://image.dfrobot.com/image/data/DFR0092/LCD4884%20v1.2.zip). Needed to unzip that into `~/Arduino/libraries`, and then needed to add `const` in `font_6x8.h` and `font_big.h` to get it to compile.
