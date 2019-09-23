void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensor = analogRead(A0);
  if(sensor > 50 && sensor < 150){
    Serial.println("es negro");
  }else if (sensor > 150 ){
    Serial.println("blanco");
  }
  Serial.println("no ay color");
  delay(100);
}
