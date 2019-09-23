// Práctica encender y apagar un LED a través de botón pulsador
const int LED=11;
const int BOTON=9;
int val;
void setup(){
pinMode(LED,OUTPUT);
pinMode(BOTON,INPUT);
Serial.begin(9600);
}
void loop(){
val=digitalRead(BOTON);
if  (val==HIGH){
//digitalWrite(LED,HIGH);
  Serial.println("si prendio");
}
else { 
  //digitalWrite(LED,LOW);
  Serial.println("off");
}
}
