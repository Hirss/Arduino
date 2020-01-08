#define S1 2
#define S2 7
#define C 12
#define D 13

bool etatS1;
bool etatS2;

void setup(){
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
}

void loop(){
  etatS1 = digitalRead(S1);
  etatS2 = digitalRead(S2);
  if(etatS1 == true)
    digitalWrite(C, HIGH);
    else
    digitalWrite(C, LOW);

  if(etatS2 == true)
  digitalWrite(D, HIGH);
  else
  digitalWrite(D,LOW);
}
