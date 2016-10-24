int pines[] = {7,9,13};            //array con 3 índices

void setup(){
  for(int i = 0; i < 3; i++){      //el bloque for se ejecutará 3 veces
    pinMode(pines[i], OUTPUT);     //suficiente para recorrer todo el array
  }
}

void loop(){
  for(int i = 0; i < 3; i++){
    digitalWrite(pines[i], HIGH);   //encender los 3 leds
    delay(1000);
  }
  for(int i = 0; i < 3; i++){
    digitalWrite(pines[i], LOW);    //apagar los 3 leds
    delay(1000);
  }
}
