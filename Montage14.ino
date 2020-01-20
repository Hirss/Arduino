

    #define S1 2            //le port 2 prend le nom S1
    #define S2 3            //le port 2 prend le nom S1
    #define H1 12
    #define H2 13           //le port 12 prend le nom H1
    bool etatS1;            //déclaration d'une variable
    bool etatS2;            //déclaration d'une variable
    int compteur;
    bool etatS1_apres;
    bool etatS2_apres;
     
    void setup()
    {
    pinMode(S1, INPUT);     //S1 est une entrée
    pinMode(S2, INPUT);     //S1 est une entrée
    pinMode(H1, OUTPUT);        //H est une sortie
    pinMode(H2, OUTPUT);
    Serial.begin(9600);
     
    }
     
    void loop()
    {
      etatS1=digitalRead(S1);  
      etatS2=digitalRead(S2);
     
    if (etatS1==true&&etatS1_apres!=etatS1)
    compteur++;
       etatS1_apres=etatS1;
     
    if (compteur>=5)       
    {
      digitalWrite(H2,HIGH);
    }
     
        if (etatS2==true&&etatS2_apres!=etatS2)
          compteur--;
       etatS2_apres=etatS2;
     
      if (compteur<=5)     
       digitalWrite(H2,LOW);
      digitalWrite(H1,HIGH);
     
      if (compteur==5)
    {
    digitalWrite(H2,HIGH);
        digitalWrite(H1,LOW);
    }
     
       
     
      Serial.print(" le compteur= ") ;
    Serial.println(compteur);
      }

