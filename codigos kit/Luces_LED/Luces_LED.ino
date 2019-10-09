byte lR1 = 46,lA1 = 44, lV1= 42; 
byte lR2 = 13,lA2 = 40, lV2= 38; 
byte G = 12,B = 11, R= 13; 

byte Matriz[]={lR1, lA1, lV1, lR2, lA2, lV2, G, B, R};
int timeDelay= 500;

void setup() {
  pinMode(lR1,1);
  pinMode(lA1,1);
  pinMode(lV1,1);
  pinMode(lR2,1);
  pinMode(lA2,1);
  pinMode(lV2,1);


}

void loop() {

  for(int i= 0; i < 8; i++){
    digitalWrite(Matriz[i], 1);
    delay(timeDelay);
    digitalWrite(Matriz[i], 0);
    delay(timeDelay);
  }

}
