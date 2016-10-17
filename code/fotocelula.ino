int pinAnalog = A2;
int pinDigital = 13;
int luzMaxima = 400;
int valor;

void setup() {
  // configuro pin 13 como salida para poder manipularlo
  pinMode(pinDigital, OUTPUT);
}

void loop() {
  // leo el valor del sensor
  valor = analogRead(pinAnalog);
  
  // si hay poca luz
  if(valor < luzMaxima){
    // encender foco
    digitalWrite(pinDigital, HIGH);
  }else{
    // sino, apagar foco
    digitalWrite(pinDigital, LOW);
  }
}
