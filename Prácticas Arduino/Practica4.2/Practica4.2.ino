#define GREEN1 13
#define GREEN2 12
#define YELLOW1 11
#define YELLOW2 10
#define RED1 9
#define RED2 8
#define POTENTIOMETER 5

void setup() {
  pinMode(GREEN1, OUTPUT);
  pinMode(GREEN2, OUTPUT);
  pinMode(YELLOW1, OUTPUT);
  pinMode(RED1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(POTENTIOMETER, INPUT);
}

void loop(){

  int ValueFromPotentiometer = analogRead(POTENTIOMETER);
  int value = map(ValueFromPotentiometer,0,1023,0,6);

  if(value == 0){
    digitalWrite(GREEN1, LOW);
    digitalWrite(GREEN2, LOW);
    digitalWrite(YELLOW1, LOW);
    digitalWrite(YELLOW2, LOW);
    digitalWrite(RED1, LOW);
    digitalWrite(RED2, LOW);
  } else if (value == 1){
    digitalWrite(GREEN1, HIGH);
    digitalWrite(GREEN2, LOW);
    digitalWrite(YELLOW1, LOW);
    digitalWrite(YELLOW2, LOW);
    digitalWrite(RED1, LOW);
    digitalWrite(RED2, LOW);
  } else if (value == 2){
    digitalWrite(GREEN1, HIGH);
    digitalWrite(GREEN2, HIGH);
    digitalWrite(YELLOW1, LOW);
    digitalWrite(YELLOW2, LOW);
    digitalWrite(RED1, LOW);
    digitalWrite(RED2, LOW);
  } else if (value == 3){
    digitalWrite(GREEN1, HIGH);
    digitalWrite(GREEN2, HIGH);
    digitalWrite(YELLOW1, HIGH);
    digitalWrite(YELLOW2, LOW);
    digitalWrite(RED1, LOW);
    digitalWrite(RED2, LOW);
  } else if (value == 4){
    digitalWrite(GREEN1, HIGH);
    digitalWrite(GREEN2, HIGH);
    digitalWrite(YELLOW1, HIGH);
    digitalWrite(YELLOW2, HIGH);
    digitalWrite(RED1, LOW);
    digitalWrite(RED2, LOW);
  } else if (value == 5){
    digitalWrite(GREEN1, HIGH);
    digitalWrite(GREEN2, HIGH);
    digitalWrite(YELLOW1, HIGH);
    digitalWrite(YELLOW2, HIGH);
    digitalWrite(RED1, HIGH);
    digitalWrite(RED2, LOW);
  } else if (value == 6){
    digitalWrite(GREEN1, HIGH);
    digitalWrite(GREEN2, HIGH);
    digitalWrite(YELLOW1, HIGH);
    digitalWrite(YELLOW2, HIGH);
    digitalWrite(RED1, HIGH);
    digitalWrite(RED2, HIGH);
  }
}