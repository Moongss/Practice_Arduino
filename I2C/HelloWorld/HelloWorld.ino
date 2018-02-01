//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

inline size_t LiquidCrystal_I2C::write(uint8_t value) {
 send(value, Rs);
        return 1;  //    수정전 return 0;
}
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x20 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
 
  // Print a message to the LCD.
  lcd.backlight();
}

void loop()
{
   lcd.setCursor(1,1);
   lcd.autoscroll();
   delay(100);
   lcd.print("Hello, World!");
}
