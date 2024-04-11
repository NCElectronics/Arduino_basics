#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 column and 2 rows

void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight();
}

void loop()
{
  lcd.clear();                 
  lcd.setCursor(0, 0);         
  lcd.print("NC Electronics");
  delay(2000);                 

  lcd.clear();                  
  lcd.setCursor(3, 0);         
  lcd.print("Arduino");        
  lcd.setCursor(0, 1);          
  lcd.print("Basics workshop"); 
  delay(2000);                  
}
