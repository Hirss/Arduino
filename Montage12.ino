#define vert 13
#define orange 12
#define rouge 11

void setup() {
  pinMode(verte, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(rouge, OUTPUT);
}

void loop() {
  digitalWrite(rouge, HIGH);
  delay(7000);
  digitalWrite(rouge, LOW);
  digitalWrite(orange, HIGH);
  delay(1000);
  digitalWrite(orange, LOW);
  digitalWrite(verte, HIGH);
  delay(6000);
  digitalWrite(verte, LOW);
}
