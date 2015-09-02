# Visual Timer

## for the SSD1306 OLED on the ESP8266

![Working Example](working_example.jpg)

## Pinout

SPI pinout for 128x64 OLEDs is wired as follows:

| ESP8266 Pin | OLED Pin  |
| ----------- | --------- |
| GPIO14      | D0 / SCLK |
| GPIO13      | D1 / MOSI |
| GPIO4       | RESET     |
| GPIO16      | DC        |
| GPIO12      | CS        |
