/*
 * LED se mantiene encendido mientras
 * se mantiene pulsado el pulsador
 
 Pulsador pin 2
 LED pin 12
 */
void setup(){
  pinMode(2,INPUT);
  pinMode(12,OUTPUT);
}
void loop(){
  while(digitalRead(2)==HIGH){
    digitalWrite(12,1);
    delay(200);
    digitalWrite(12,0);
    delay(400);
  }    
}
