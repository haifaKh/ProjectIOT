#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)

void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello");
}
void loop() {
  lcd.display();
}
