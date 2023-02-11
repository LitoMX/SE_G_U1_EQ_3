//Mismo funcionamiento del anterior código sólo que ocupamos ciclos for
int leds[] = {10,11,12};
int  i;
void setup() {
  
  for(i = 0; i<3; i++){
      pinMode(leds[i],OUTPUT);

  }
}

void loop() {
  for(i = 0; i<3; i++){
    digitalWrite(leds[i], HIGH);
  }
  
  //Con el delay le damos tiempo al LED para encenderse y apagarse 
  delay(1000);

  //digitalWrite(led, LOW); //APAGAR LED
  //digitalWrite(led, false); //APAGAR LED 
  for(i = 0; i<3; i++){
    digitalWrite(leds[i], LOW);
  }
  
  delay(1000);

}

