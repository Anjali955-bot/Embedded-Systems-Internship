#include <LiquidCrystal.h>

// LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int tempPin = A0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temp Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {

  int reading = analogRead(tempPin);
  float voltage = reading * (5.0 / 1023.0);
  float temperature = (voltage - 0.5) * 100;

  lcd.setCursor(0, 0);
  lcd.print("Temperature:");

  lcd.setCursor(0, 1);
  lcd.print(temperature);
  lcd.print(" C   ");

  delay(1000);
}

