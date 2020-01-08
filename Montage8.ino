#define S1 2 //Bouton 1 doit etre relier au port 2
#define S2 7 //Bouton 2 doit etre relier au port 7
#define C 12 //LED doit etre relier au port 12

bool etatS1;
bool etatS2;

void setup(){
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(C, OUTPUT);
}

void loop(){
  etatS1 = digitalRead(S1);
  etatS2 = digitalRead(S2);
  if(etatS1 or etatS2 == true)
    digitalWrite(C, HIGH);
    else
    digitalWrite(C, LOW);
}
