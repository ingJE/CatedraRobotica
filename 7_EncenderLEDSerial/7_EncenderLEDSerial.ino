/*  TITULO: Control de un LED a través del Monitor Serie
   
    DESCRIPCIÓN DEL PROGRAMA
   
    Este programa controla un LED mediante el envío de carácteres a través del monitor serie.
    - Si mandamos "E" o "e" --> El LED se enciende.
    - Si mandamos "A" o "a" --> El LED se apaga.
   
   
    ESQUEMA DE CONEXION
   
                                      +-----+
         +----[PWR]-------------------| USB |--+
         |                            +-----+  |
         |         GND/RST2  [ ][ ]            |
         |       MOSI2/SCK2  [ ][ ]  A5/SCL[ ] |    
         |          5V/MISO2 [ ][ ]  A4/SDA[ ] |    
         |                             AREF[ ] |
         |                              GND[ ] |
         | [ ]N/C                    SCK/13[ ] |  
         | [ ]IOREF                 MISO/12[ ] |  
         | [ ]RST                   MOSI/11[ ]~|  
         | [ ]3V3    +---+               10[ ]~|  
         | [ ]5v    -| A |-               9[ ]~|  
         | [ ]GND   -| R |-               8[ ] |  
         | [ ]GND   -| D |-                    |
         | [ ]Vin   -| U |-               7[ ] |  
         |          -| I |-               6[ ]~|  
         | [ ]A0    -| N |-               5[ ]~|   LED(+)
         | [ ]A1    -| O |-               4[ ] |  
         | [ ]A2     +---+           INT1/3[ ]~|  
         | [ ]A3                     INT0/2[ ] |  
         | [ ]A4/SDA  RST SCK MISO     TX>1[ ] |  
         | [ ]A5/SCL  [ ] [ ] [ ]      RX<0[ ] |  
         |            [ ] [ ] [ ]              |
         |  UNO_R3    GND MOSI 5V  ____________/
          \_______________________/
 
  NOTAS:
 
   - Cátodo(-) del LED (pata más corta) a GND a través de una R=220 ohms.
 
*/
 
  int LED = 13; // Pin digital para el LED
  char entrada; // Variable para guardar el valor del carácter enviado
  
  void setup()  {
    pinMode(LED, OUTPUT); // Pin digital del LED como salida.
    Serial.begin(9600); // Velocidad de comunicación en baudios.
  }
  
   void loop()  {
    if (Serial.available() > 0) // Si se recibe un carácter...
    {
      entrada = Serial.read(); // Guardamos el valor del carácter en la variable entrada.
   
      if ((entrada=='E')||(entrada=='e')) // Si el carácter recibido es "E" o "e"
      {      
        digitalWrite(LED, HIGH); // Se enciende el LED
        Serial.print("Se ha enviado una "); // Mostramos valores a través del monitor serie
        Serial.write(entrada);
        Serial.print(" --> LED ENCENDIDO!!!");
        Serial.print("\n");
      }
      else if ((entrada=='A')||(entrada=='a')) // Si el carácter recibido es "A" o "a"    
      {
        digitalWrite(LED, LOW); // Se apaga el LED
        Serial.print("Se ha enviado una "); // Mostramos valores a través del monitor serie
        Serial.write(entrada);
        Serial.print(" --> LED APAGADO!!!");
        Serial.print("\n");
      }
    }
  }

  /* OTRA
   * int option;
int led = 13;
 
void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT); 
}
 
void loop(){
  //si existe datos disponibles los leemos
  if (Serial.available()>0){
    //leemos la opcion enviada
    option=Serial.read();
    if(option=='a') {
      digitalWrite(led, LOW);
      Serial.println("OFF");
    }
    if(option=='b') {
      digitalWrite(led, HIGH);
      Serial.println("ON");
    }
  }
}
*/
   
