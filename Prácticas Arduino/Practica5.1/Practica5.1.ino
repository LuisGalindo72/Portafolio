#include <LiquidCrystal.h>

#define LDR 5
#define PIN1 7
#define PIN2 8
#define PIN3 9
#define PIN4 10
#define PIN5 11
#define PIN6 12

LiquidCrystal lcd(PIN1, PIN2, PIN3, PIN4, PIN5, PIN6);
int value, normalizedValue;

void setup() {
  pinMode(LDR, INPUT);
  pinMode(PIN1, OUTPUT);
  pinMode(PIN2, OUTPUT);
  pinMode(PIN3, OUTPUT);
  pinMode(PIN4, OUTPUT);
  pinMode(PIN5, OUTPUT);
  pinMode(PIN6, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("Nivel de luz:");
}

void loop() {
  value = analogRead(LDR);
  normalizedValue = map(value, 0, 1023, 0, 100);
  lcd.setCursor(0, 1);
  lcd.print(normalizedValue);
  lcd.print("%");
}