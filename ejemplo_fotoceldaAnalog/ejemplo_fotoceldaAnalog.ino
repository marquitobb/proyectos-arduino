//const int LEDpin = 13;
int pinVerde = 2;
int pinAmarillo = 3;
int pinRojo = 4;
int LDRpin = A1;
int vldr = 0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinRojo, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinAmarillo, LOW);
  digitalWrite(pinRojo, LOW);
  
  vldr = analogRead(LDRpin);
  Serial.println(vldr);

  if(vldr > 256){
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAmarillo, LOW);
    digitalWrite(pinRojo, LOW);
  }
  if(vldr > 400){
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAmarillo, HIGH);
    digitalWrite(pinRojo, LOW);
  }
  if(vldr > 500){
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAmarillo, LOW);
    digitalWrite(pinRojo, HIGH);
  }
  delay(200);
}
