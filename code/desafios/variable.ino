int pin = 6;  //la variable pin se inicializa a 6, es decir vamos a activar el pin 6

void setup(){
  pinMode(pin, OUTPUT);
}

void loop(){
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}