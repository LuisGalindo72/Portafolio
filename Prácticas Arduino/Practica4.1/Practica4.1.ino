#define BUZZER 11
#define POTENTIOMETER 5

void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(POTENTIOMETER, INPUT);
}

void loop() {
  int ValueFromPotentiometer = analogRead(POTENTIOMETER);
  int ValueToBuzzer = map(ValueFromPotentiometer, 0, 1023, 0, 255);
  analogWrite(BUZZER, ValueToBuzzer);
}