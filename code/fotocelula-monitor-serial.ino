int pinAnalog = A2;
int pinDigital = 13;
int luzMaxima = 400;
int valor;

void setup() {
  // configuro pin 13 como salida para poder manipularlo
  pinMode(pinDigital, OUTPUT);
  // abrimos el puerto serial para seguir eventos
  Serial.begin(9600);
}

void loop() {
  // leo el valor del sensor
  valor = analogRead(pinAnalog);

  // imprimir valor en monitor serial
  String br = "\n";
  Serial.print( br += valor );
  
  // si hay poca luz
  if(valor < luzMaxima){
    // encender foco
    digitalWrite(pinDigital, HIGH);
  }else{
    // sino, apagar foco
    digitalWrite(pinDigital, LOW);
  }
  
}
