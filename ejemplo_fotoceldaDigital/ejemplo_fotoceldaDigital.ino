//ESTE ES ENTRADA DIGITAL
const int LEDPin = 13;
const int LDRPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);
  pinMode(LDRPin, INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  int value = difitalRead(LDRPin);
  if(value == HIGH)
  {
    digitalWrite(LEDPin, HIGH);
    delay(50)
    digitalWrite(LEDPin, LOW);
    delay(50)
  }
}
