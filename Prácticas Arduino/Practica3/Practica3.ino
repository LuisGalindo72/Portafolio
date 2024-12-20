#define REDCARS 13
#define YELLOWCARS 12
#define GREENCARS 11
#define GREENPEDESTRIANS 10
#define REDPEDESTRIANS 9
#define SIGNAL 3
#define BUTTON 6

void setup() {
  // put your setup code here, to run once:
  pinMode(REDCARS, OUTPUT);
  pinMode(YELLOWCARS, OUTPUT);
  pinMode(GREENCARS, OUTPUT);
  pinMode(REDPEDESTRIANS, OUTPUT);
  pinMode(GREENPEDESTRIANS, OUTPUT);
  pinMode(SIGNAL, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);

  digitalWrite(REDCARS, LOW);
  digitalWrite(YELLOWCARS, LOW);
  digitalWrite(GREENCARS, HIGH);
  digitalWrite(REDPEDESTRIANS, HIGH);
  digitalWrite(GREENPEDESTRIANS, LOW);
  digitalWrite(SIGNAL, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(BUTTON) == LOW) {
    digitalWrite(SIGNAL,HIGH);
    delay(5000);
    digitalWrite(YELLOWCARS,HIGH);
    digitalWrite(GREENCARS,LOW);
    delay(2000);
    digitalWrite(YELLOWCARS,LOW);
    digitalWrite(REDCARS,HIGH);
    digitalWrite(SIGNAL,LOW);
    digitalWrite(REDPEDESTRIANS,LOW);
    digitalWrite(GREENPEDESTRIANS,HIGH);
    delay(10000);
    for(int i = 0;i<3;i++){
      digitalWrite(GREENPEDESTRIANS,LOW);
      delay(1000);
      digitalWrite(GREENPEDESTRIANS,HIGH);
      delay(1000);
    }
    digitalWrite(GREENPEDESTRIANS,LOW);
    digitalWrite(REDPEDESTRIANS,HIGH);
    digitalWrite(REDCARS,LOW);
    digitalWrite(GREENCARS,HIGH);
  }
}
