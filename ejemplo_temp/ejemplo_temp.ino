float temp =0;
int pinTemp = A5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(pinTemp);
  temp = temp * 0.48848125;
  Serial.print("Temperatura -- ");
  Serial.print(temp);
  Serial.println(" *C");

  if (temp<23){
    Serial.println("Temperatura baja");
    
  }else if (temp>=23 && temp<26){
    Serial.println("Temperatura normal");
  }else{
    Serial.println("Temperatura alta");
  }
  delay(1000);
}
