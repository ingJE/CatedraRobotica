/*
  Semaforo: 
  Estado verde 8s
  Estado amarillo 2
  Estado rojo 10s
  
  LED rojo pin 12
  LED amarillo pin 10
  LED verde pin 8
  */

// Declaracion de variables de tipo constante entero
const int RojoPin = 12;     // LED rojo asociado al pin 12
const int AmarilloPin = 10; // LED amarillo asociado al pin 10
const int VerdePin = 8;     // LED verde asociado al pin 8

// la funcion set up se ejecuta una sola vez
void setup() {
  // inicializa los pines como una salida digital
  pinMode(RojoPin, OUTPUT);
  pinMode(AmarilloPin, OUTPUT);
  pinMode(VerdePin, OUTPUT);
}

// la funcion loop se ejecuta repetidamente de forma infinita
void loop() {
  // ESTADO SEMAFORO VERDE
  digitalWrite(RojoPin, LOW);       // establece 0v en el pin del LED rojo  
  digitalWrite(AmarilloPin, LOW);   // establece 0v en el pin del LED amarillo
  digitalWrite(VerdePin, HIGH);     // establece 5v en el pin del LED verde
  delay(8000);                      // espera 8 segundos
  digitalWrite(AmarilloPin, HIGH);  // establece 5v en el pin del LED amarillo
  digitalWrite(VerdePin, LOW);      // establece 0v en el pin del LED verde
  delay(2000);                      // espera 2 segundos
  digitalWrite(RojoPin, HIGH);      // establece 5v en el pin del LED rojo
  digitalWrite(AmarilloPin, LOW);   // establece 0v en el pin del LED amarillo
  delay(10000);                     // espera 10 segundos
}
