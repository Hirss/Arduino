#define S1 2
#define S2 3
#define H 12
bool etatS1;
bool etatS2;
int compteur;
//int etatS1_apres;

void setup(){
pinMode(S1, INPUT);
pinMode(S2, INPUT);
pinMode(H, OUTPUT);
Serial.begin(9600);
}

void loop(){
  etatS1=digitalRead(S1);	
  etatS2=digitalRead(S2);	
  
  if (etatS1==true)
	compteur++;
  // etatS1_apres=etatS1;

  
  if(etatS2==true){
    digitalWrite(H, LOW);
    compteur=0;
    }
    Serial.print("le compteur = ");
    Serial.println(compteur);
}
