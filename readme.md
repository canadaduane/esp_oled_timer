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