/*
  Demostracion del ciclo for
 */

int tiempo = 200;  //Defino el tiempo         

void setup() {
    //Usa este loop for para inicializar cada pin como salida
  for (int Pin = 2; Pin <= 7; Pin++) {
    pinMode(Pin, OUTPUT);
  }
}

void loop() {
  //Desde lepin 2 hasta el 7 voy prendiendo uno a uno
  for (int Pin = 2; Pin <= 7; Pin++) {
    
    digitalWrite(Pin, HIGH);
    delay(tiempo);
    digitalWrite(Pin, LOW);
    delay(tiempo);
  }

  //Desde el pin 7 hasta el pin 2 voy prendiendo uno a uno.
  for (int Pin = 7; Pin >= 2; Pin--) {
    
    digitalWrite(Pin, HIGH);
    delay(tiempo);
    digitalWrite(Pin, LOW);
    delay(tiempo);
  }
}
