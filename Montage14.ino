#define S1 8
#define S2 12
#define vert 13
#define rouge 7

int compteur;


void setup() {
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(vert, OUTPUT);
  pinMode(rouge, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    if(digitalRead(S1) == true) {
    compteur++;
  }
  
  if(digitalRead(S2) == true) {
    compteur--;
  } 
  Serial.print("Places = ");
  Serial.println(compteur);
  if(count < 20){
    digitalWrite(vert, HIGH);
  }else{
    digitalWrite(vert, LOW);
    digitalWrite(rouge, HIGH);
  }
  if(count == 20){
    digitalWrite(rouge, HIGH);
  }else{
  digitalWrite(rouge, LOW);
  digitalWrite(vert, HIGH);
  }
}
