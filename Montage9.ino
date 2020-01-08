#define S1 2 //Bouton 1 doit etre relier au port 2
#define C 12 //LED doit etre relier au port 12

bool etatS1;

void setup(){
  pinMode(S1, INPUT);
  pinMode(C, OUTPUT);
}

void loop(){
  etatS1 = digitalRead(S1);
  if(etatS1 == true)
    digitalWrite(C, HIGH);
    digitalWrite(C, LOW);
    delay(2500);
}
