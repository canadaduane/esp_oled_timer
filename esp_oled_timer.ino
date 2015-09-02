#define CORE_INT_EVERYPIN
#define font_titania_46 1

#include <Wire.h>
#include <SPI.h>
#include <Adafruit_mfGFX.h>
#include <Adafruit_SSD1306.h>

/* I2C *
#define OLED_SCL 5
#define OLED_SDA 4
#define OLED_RST 15

Adafruit_SSD1306 display(OLED_RST);

void setup() {
  Serial.begin(9600);
  Serial.println("Starting...");

  Wire.begin(OLED_SDA, OLED_SCL);

  display.begin(SSD1306_SWITCHCAPVCC);
  display.display();

  delay(2000);
  display.clearDisplay();
}
*/

#define OLED_MOSI 13
#define OLED_SCLK 14
#define OLED_DC 16
#define OLED_RST 4
#define OLED_CS 12

Adafruit_SSD1306 display(
  OLED_MOSI,
  OLED_SCLK,
  OLED_DC,
  OLED_RST,
  OLED_CS);

void setup() {
  Serial.begin(9600);
  Serial.println("Starting...");

  display.begin(SSD1306_SWITCHCAPVCC);
  display.clearDisplay();
  display.display();
}


int minutes = 0;
int seconds = 0;

void loop() {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setFont(font_titania_46);
  display.setCursor(10, 10);
  display.print(minutes);
  display.print(":");
  if (seconds < 10) {
    // Prefix single-digit numbers with an extra zero
    display.print("0");
  }
  display.print(seconds);
  display.display();

  Serial.print("looping...");
  Serial.print(minutes);
  Serial.print(":");
  Serial.println(seconds);
  delay(1000);

  seconds++;
  if (seconds >= 60) {
    seconds = 0;
    minutes++;
  }
}
