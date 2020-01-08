#define S1 2		//le port 2 prend le nom S1
#define H 12		//le port 12 prend le nom H
bool etatS1;		//déclaration d'une variable

void setup(){
pinMode(S1, INPUT);		//S1 est une entrée
pinMode(H, OUTPUT);	//H est une sortie
}

void loop(){
  etatS1=digitalRead(S1);		//la variable prend l'état logique de S1

  if (etatS1==true)		//si S1 est vrai
    digitalWrite(H, HIGH);		//H passe à un niveau haut
    else				//sinon
    digitalWrite(H, LOW);		//H passe à un niveau bas
}
