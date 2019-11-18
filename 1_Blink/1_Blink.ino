/**
 * Hola Mundo
 */

// La funcion setup() se ejecuta solo una vez
void setup() {
    pinMode(13, OUTPUT);  // inicializamos el pin digital 13 
                          // como salida digital
}

// La funcion loop() se ejecuta de forma repetitiva
void loop() {
    digitalWrite(13, HIGH); // Escribe un valor alto (5V) en el pin13
    delay(1000);            // Espera 1 segundo
    digitalWrite(13, LOW);  // Escribe un valor bajo (0V) en el pin13
    delay(1000);            // Espera 1 segundo.
}
