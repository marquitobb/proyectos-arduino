

void setup() {
  // ponemos los pines 2,3,4,5,6 como salidas digitales
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  Serial.begin(9600); //velocidad del puerto serial

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0); //lee la entrada analogica
  // si esta dentro del rango prende el led
  if (sensorValue>=360 && sensorValue<=400){
      Serial.println("es color es azul");
      digitalWrite(2, HIGH);
  }
  else{
      digitalWrite(2, LOW);
  }
  if (sensorValue>=36 && sensorValue<=42){
      Serial.println("es color amarillo");
      digitalWrite(3, HIGH);
  }
  else{
      digitalWrite(3,LOW);
  }  
  if (sensorValue>=28 && sensorValue<=30){
      Serial.println("es color rojo");
      digitalWrite(4, HIGH);
  }
  else{
      digitalWrite(4,LOW);
  }
  if (sensorValue>=31 && sensorValue<=34){
      Serial.println("es color blanco");
      digitalWrite(5, HIGH);
  }
  else{
      digitalWrite(5,LOW);
  }
  if (sensorValue>=650 && sensorValue<=750){
      Serial.println("es color verde");
      digitalWrite(6, HIGH);
  }
  else{
      digitalWrite(6,LOW);
  }
  Serial.println(sensorValue);
  delay(1000);
  
}
