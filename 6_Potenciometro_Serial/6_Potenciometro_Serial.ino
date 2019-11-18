int digitalPot;

void setup() {

  Serial.begin(9600);
  Serial.println("Prueba del monitor serial");
  Serial.println("Con una Entrada Analogica con potenciometro");
}

void loop() {
  
  digitalPot = analogRead(A0);
  Serial.println("El valor digitalizado es = ");
  Serial.println(digitalPot);
  delay(500);
  
}
