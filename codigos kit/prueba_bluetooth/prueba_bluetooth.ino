String dato = "", dato1="";

void setup() {
  Serial1.begin(9600);

  
  Serial1.println("Hola mundo");

  Serial.begin(9600);

  Serial.println("Hola mundo");
}

void loop() {
  if(Serial1.available()>0){
    dato = Serial1.readString();
    Serial.println(dato);
    Serial1.println(dato);
  }

  

}
