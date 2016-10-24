int pines[] = {9,13};      //array con dos índices
int ledRojo = pines[0];    //variable ledRojo equivale al pin 9
int ledVerde = pines[1];   //variable ledVerde equivale al pin 13

void setup(){
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop(){
  digitalWrite(ledRojo, HIGH);   //encender pin 9
  digitalWrite(ledVerde, HIGH);  //encender pin 13
  delay(1000);
  digitalWrite(ledRojo, LOW);    //apagar pin 9
  digitalWrite(ledVerde, LOW);   //apagar pin 13
  delay(1000);
}