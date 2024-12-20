#define BUZZER 8
#define PIRSENSOR 13
#define LED1 6
#define LED2 4
#define LED3 2

void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(PIRSENSOR, INPUT);
}

void loop() {
  if (digitalRead(PIRSENSOR) == HIGH) {
    digitalWrite(BUZZER, HIGH);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    delay(300);
  } else {
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
}