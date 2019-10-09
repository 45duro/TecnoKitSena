
int sensor=0;

void setup() {
  pinMode(17,INPUT);
  pinMode(13,OUTPUT);

}

void loop() {

  sensor = digitalRead(17);
  if(sensor){
    digitalWrite(13,1);
  }
  else{
    digitalWrite(13,0);
  }
 

}
