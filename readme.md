# Visual Timer

## for the SSD1306 OLED on the ESP8266

![Working Example](working_example.jpg)

## Pinout

SPI pinout for 128x64 OLEDs is wired as follows:

| ESP8266 Pin | OLED Pin       | Color of Wire in Picture |
| ----------- | -------------- | ------------------------ |
| GPIO14      | CLK / SCLK / D0| Yellow                   |
| GPIO13      | MOSI / D1      | Brown                    |
| GPIO4       | RESET          | NONE                     |
| GPIO16      | D/C            | Green                    |
| GPIO12      | CS             | Orange                   |
| ----------- | -------------- | ------------------------ |
| VCC         | VCC            | Red                      |
| GND         | GND            | Black                    |

## Libraries

- Uses a modified [Adafruit_mfGFX](https://github.com/canadaduane/Adafruit_mfGFX) for multi-font capability.
- Uses a modified [Adafruit_SSD1306](https://github.com/canadaduane/Adafruit_SSD1306) to enable the OLED on the ESP8266 hardware, and avoid conflicts with some "swap" macros.

To install the above libraries, follow the above links and click "Download ZIP" on the right-hand side. Unzip the files and RENAME them by removing "-master" from the resulting folder name. For example, when you unzip `Adafruit_mfGFX-master.zip`, there will be a folder created called `Adafruit_mfGFX-master`. Rename that folder to `Adafruit_mfGFX`. Then, move the folder to your Arduino `libraries` folder (on Mac OS and Linux, it can be found in `~/Documents/Arduino/libraries`, on windows it would be in `My Documents\Arduino\libraries`).

