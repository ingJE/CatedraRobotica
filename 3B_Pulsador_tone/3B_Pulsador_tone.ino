/*
 Pulsador Zumbador
 Sistema para controlar un zumbador con un pulsador
 
 Hardware: 
 Pulsador pin 2
 Zumbador pin 12
 
 */

// constantes que no cambian se usan para establecer los pines
const int pulsadorPin = 2;      // el numero del pin del pulsador
const int buzzerPin =  12;      // el numero de pin del zumbador

// variables que cambian
int estadoPulsador = 0;         // variable para almacenar el estado del pulsador

void setup() {
  
  pinMode(pulsadorPin, INPUT);  // inicializa el pulsador como entrada
  
 
}

void loop() {
  
 estadoPulsador = digitalRead(pulsadorPin);   // lee el estado del pulsador y lo 
                                              //almacena en la variable
  
  if (estadoPulsador == HIGH) {         // revisa si el pulsador esta presionado
    tone(buzzerPin, 523);               // activa el zumbador  C5: 523
    delay(1000);
    noTone(buzzerPin);
    delay(1000);
  }
 
}
