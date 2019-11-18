/*
 * Cuando se pulse el boton el led parpadeara
 * solo 3 veces
 
 Pulsador pin 2
 LED pin 12
 */
void setup(){
  pinMode(2,INPUT);   //pin 2 como entrada (el pulsador)
  pinMode(12,OUTPUT); //pin 12 como salida (el led)
}
void loop(){
  if(digitalRead(2)==HIGH){  //mientras el pulsador este presionado 
                             //parpadea el led parpadea 3 veces
    for(int i = 0; i<=3; i++){  //ciclo for, i++ es lo mismo i=i+1
    digitalWrite(12,1);         
    delay(200);
    digitalWrite(12,0);
    delay(400);
    }   //cierra el for
  }     //cierra el if
     
}       //cierra el loop
