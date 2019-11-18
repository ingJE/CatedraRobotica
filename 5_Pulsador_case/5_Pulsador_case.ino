// Declaración de variables 
 
int led1=13; 
int led2=12; 
int led3=11; 
int pulsador = 2;
 
int opcion=0;       // variable para elegir distintos casos

void setup(){
 // Serial.begin(9600);     // Inicia a comunicación serie
  pinMode(led1, OUTPUT);    // Configuramos o LED como saída
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop(){  
   if (digitalRead(pulsador) == HIGH){  // Esta el pulsado 
    delay(50);            // esperamos 100ms
    opcion++;             // incrementamos la varaible opcion
    if(opcion==4){        // cuando la opcion llegue a 4
      opcion=0;           // la ponemos a 0
   }    
  }
 
  switch(opcion){               //elije opcion  
    case 0: digitalWrite(led1, LOW); 
            digitalWrite(led2, LOW); 
            digitalWrite(led3, LOW);
            break;
    case 1: digitalWrite(led1, HIGH); 
            digitalWrite(led2, LOW); 
            digitalWrite(led3, LOW); 
            break;  
    case 2: digitalWrite(led1, HIGH); 
            digitalWrite(led2, HIGH); 
            digitalWrite(led3, LOW);
            break;
    case 3: digitalWrite(led1, HIGH); 
            digitalWrite(led2, HIGH); 
            digitalWrite(led3, HIGH);
            break;
    }         //cierra el switch   
 }            // cierra el loop
 
