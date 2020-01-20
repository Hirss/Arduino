#define S1 8
#define S2 12
#define vert 13
#define rouge 7

int count;


void setup() {
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(vert, OUTPUT);
  pinMode(rouge, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(S1) == true && count < 5) {
    digitalWrite(vert, HIGH);
    count++;
  }
  
  if(count >= 5){
    digitalWrite(vert, LOW);
    digitalWrite(rouge, HIGH);
  }
  
  if(count < 5) {
    digitalWrite(rouge, LOW);
    digitalWrite(vert, HIGH);
  }
  
  if(digitalRead(S2) == true) {
    count--;
  } 
  
  Serial.print("Places = ");
  Serial.println(count);
}
