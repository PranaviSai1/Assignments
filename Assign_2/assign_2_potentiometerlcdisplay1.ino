#include <LiquidCrystal.h>
LiquidCrystal LCD(12,11,5,4,3,2);

void setup() {
 
   LCD.begin(16, 2);
   LCD.home();
 
}

void loop() \
{
  LCD.display();
  LCD.blink();
  LCD.cursor();
 
  LCD.setCursor(0,0);
  LCD.print("Sure Trust ProEd");
  delay(2000);
  LCD.clear();
  
  LCD.setCursor(3,10);
  
  LCD.print("ES & IOT");
  
  delay(1000);
  LCD.clear();
  LCD.noDisplay();
  
}
 