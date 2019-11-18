/*
Autor Javier Erhardt
Contador pulsador
*/
const int ledVerde = 3;
const int ledRojo = 4;
const int button = 2;
int cont = 0;

void setup() { // codigo ejemplo
  pinMode(ledVerde, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledRojo, LOW);
  Serial.begin(9600);
  

}

void loop() {

  if(digitalRead(button) == HIGH) {
    cont++;
    digitalWrite(ledVerde, HIGH);
    Serial.println("Boton activado: " + cont + " veces");
    delay(500);
    digitalWrite(ledVerde, LOW);
  }

  if(cont == 10) {
    cont == 0;
    digitalWrite(ledRojo, HIGH);
    Serial.println("Contador llego a 10");
    delay(5000);
    digitalWrite(ledRojo, LOW);
  }

}
