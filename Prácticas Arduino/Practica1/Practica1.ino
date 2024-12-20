#define RED 13
#define GREEN 12
#define BUTTON 4

void setup() {

  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BUTTON,OUTPUT);

}

void loop() {
  
  if(digitalRead(BUTTON)==LOW)
  {
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
  }
  else
  {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
  }
}
