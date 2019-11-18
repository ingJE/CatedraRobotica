int digitalPot;
int tiempo;

void setup() {

  Serial.begin(9600);
  Serial.println("Prueba del monitor serial");
  Serial.println("Con una Entrada Analogica con potenciometro");
}

void loop() {
  
  digitalPot = analogRead(A0);
  Serial.println("El valor digitalizado es = ");
  Serial.println(digitalPot);
  tiempo = digitalPot;
  digitalWrite(13, HIGH);
  delay(tiempo);
  digitalWrite(13, LOW);
  delay(tiempo);
  
}
