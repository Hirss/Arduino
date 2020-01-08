#define S1 2			//le port 2 prend le nom S1
#define S2 3			//le port 2 prend le nom S1
#define H1 12		//le port 12 prend le nom H1
#define H2 13		//le port 13 prend le nom H2
bool etatS1;			//déclaration d'une variable
bool etatS2;			//déclaration d'une variable
bool x;			//déclaration d'une variable
longtemps_apres;		//déclaration d'une variable de type long, 32 bits

void setup(){
    pinMode(S1, INPUT);		//S1 est une entrée
    pinMode(S2, INPUT);		//S1 est une entrée
    pinMode(H1, OUTPUT);		//H est une sortie
    pinMode(H2, OUTPUT);		//H est une sortie
}

void loop(){
  etatS1=digitalRead(S1);				//la variable prend l'état logique de S1
  etatS2=digitalRead(S2);				//la variable prend l'état logique de S2

if(millis()>temps_apres&&etatS1==true){		//si le chrono est supérieur a la variable et S1 est vrai
    digitalWrite(H1, x);				// H1 prend la valeur de x
	x=!x;					// l'etat de la variable x est inversé
    temps_apres=(millis()+500);
}			// 500ms sont rajoutées à la variable
