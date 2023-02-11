//PWM = Modulación por ancho de pulso 
//Analogia: Consiste en simular una señal analogica a traves de la modifiacion del tiempo de trabajo
//(Alto) de una señal digital

//PWM = 1 Byte = 0 al 255.
//Donde 0 = 0 VOLTS
//    255 = 5 VOLTS

//No todos los pines digitales son PWM, solo los que se indican
//En el caso del arduino UNO son aquellos que cuenten con una virgulilla a su lado (~)

int led = 6; //pin compatible con PWM
void setup() {
  //Los pines PWM no se les establece modo de trabajo

}

int i;
void loop() {
  // put your main code here, to run repeatedly:
  for(i = 0; i<255; i++){
    analogWrite(led,i); //PWM
    delay(10);
  }
  
  for(i = 255; i>=0; i--){
    analogWrite(led,i);
    delay(10);
  }
}
