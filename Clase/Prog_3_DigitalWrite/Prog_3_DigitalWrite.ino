int led = 13;
//Arduino UNO y arduino MEGA cuentan con un LED de prueba en la placa ubicado en el pin 13

void setup() {
  //Debe establecerse el modod de trabajo de un pin digital, qa sea este de entrada o salida
  pinMode(led,OUTPUT);
}

void loop() {
  //digitalWrite(led, HIGH); //PRENDER LED
  //digitalWrite(led, true); //PRENDER LED
  digitalWrite(led, HIGH);

  //Con el delay le damos tiempo al LED para encenderse y apagarse 
  delay(1000);

  //digitalWrite(led, LOW); //APAGAR LED
  //digitalWrite(led, false); //APAGAR LED 
  digitalWrite(led, LOW);
}

