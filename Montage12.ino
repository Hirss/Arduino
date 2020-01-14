#define S1 8
#define vert 13
#define orange 12
#define rouge 7

void setup() {
  pinMode(S1, INPUT);
  pinMode(vert, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(rouge, OUTPUT);
}

void loop() {
  if(digitalRead(S1) == true) {
    digitalWrite(rouge, HIGH);
  delay(7000);
    digitalWrite(rouge, LOW);
    digitalWrite(orange, HIGH);
  delay(1000);
    digitalWrite(orange, LOW);
    digitalWrite(vert, HIGH);
  delay(6000);
    digitalWrite(vert, LOW);
  }
}
