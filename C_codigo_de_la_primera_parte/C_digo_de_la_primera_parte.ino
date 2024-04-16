/*Damasco Oxcal Vasquez 2023442*/

/*
  Fundacion kinal
  centro educativo tecnico laboral kinal
  Quinto Perito
  Quinto electronica
  Codigo Tecnico: EB5AM
  Curso: Taller d electronica digital y reparacion de computadoras I
  proyecto: Como leer un pin digital
  Dev: profe. Alejandro Lopez Navas
  Fecha: 12 de abril
*/

//directivas del preprocesador
#define push_button 2 //Push button conectado al pin2
#define led 3

void setup(){
  pinMode(push_button, INPUT); //Pin2 como entrada
  pinMode(led, OUTPUT);
  Serial.begin(9600);                       //Inicio la comunicacion serial
  Serial.println("Lectura de un pulsador"); //Envio el texto entre comillas al puerto serie
}

void loop(){
  //Variable local, que se encarga de almacenar el valor (abierto o cerrado)
  //del pulsador conectado al pin2
  bool estado_boton = digitalRead(push_button);
  if (estado_boton == HIGH) //¿He presionado el interrupor?
  {
   //si lo he presionado
   digitalWrite(led,LOW); //apago la lad
  }else {
   //si no lo he presionado
   digitalWrite(led, HIGH); //mantengo encendido el led
  }
}
