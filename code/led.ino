// inicializamos el pin 13
int pinSalida = 13;

void setup() {
  // abrimos el puerto serial para seguir eventos
  Serial.begin(9600);
  // configuramos el pin 13 como salida
  pinMode(pinSalida, OUTPUT);
}

void loop() {
  // encender led
  digitalWrite(pinSalida, HIGH);
  Serial.print("Encendido\n");
  delay(1000);
  
  // apagar led
  digitalWrite(pinSalida, LOW);
  Serial.print("Apagado\n");
  delay(1000);
}