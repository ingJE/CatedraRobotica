/*
 * Pulsador con Memoria
 Pulsador para controlar un LED con memoria
 
 Pulsador pin 2
 LED pin 12
 */
// constantes que no cambian se usan para establecer los pines
const int pinPuls = 2;     // el numero del pin del pulsador
const int ledPin = 12;       // el numero de pin del led

// variables que cambian
int estadoLED = LOW;         // Estado actual del led apagado
int estadoPulsador = 0;        // variable para almacenar el estado del pulsador

void setup() {
  // inicializa los pines como entradas y salidas
  pinMode(pinPuls, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, estadoLED);
}

void loop() {
  
  estadoPulsador = digitalRead(pinPuls);  // lee el estado del pulsador y lo almacena en variable
  
  if (estadoPulsador == HIGH) {   // revisa si el pulsador esta presionado
    
    if (estadoLED == LOW) {       // si el estado del led es bajo
      estadoLED = HIGH;           // lo establece como alto
    }
   
    else {                         // en caso contario lo establece como bajo
      estadoLED = LOW;
    }
    
    delay(200);             // tiempo que evita que el programa siga cumpliendo la condicion
    digitalWrite(ledPin, estadoLED);  // establece el estado del LED
  }
  
}
