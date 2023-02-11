//Potenciometro & Serial

int led = 3;
int pot[] = {A0,A1};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

int pot_descicion, pot_entrada, serial_entrada;
void loop() {
  // put your main code here, to run repeatedly:
  pot_descicion = analogRead(pot[0]);
  pot_descicion = map(pot_descicion,0,1023,0,1);
  if(pot_descicion == 0)
  {
    pot_entrada = analogRead(pot[1]);
    pot_entrada = map(pot_entrada,0,1023,0,255);
    Serial.print(pot_entrada);
    analogWrite(led,pot_entrada);
    Serial.println("entraste!!!!!");                         
  }
  else
  {

   if(Serial.available() > 0)
    {
      int serial_entrada = Serial.readString().toInt();// Serial.parseInt();
	
      analogWrite(led,serial_entrada);      
      delay(1000);
    }
  }
  Serial.println("Descicion = "+ String(pot_descicion));
  delay(400);  
}
