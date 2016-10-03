//incluimos la libreria Servo
#include <Servo.h>
//creamos una variable motor de tipo Servo para poder utilizar las funciones de la librería 
Servo motor;
//inicializamos variable posicion
int pos;

void setup() {
  //selecciono el pin 9
  motor.attach(9);
}

void loop() {
  //girar 180º
  for (pos = 0; pos <= 180; pos ++) {
    motor.write(pos);
    delay(15);
  }
  //volver 180º
  for (pos = 180; pos >= 0; pos --) {
    motor.write(pos);
    delay(15);
  }
}