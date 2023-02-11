//Limite Superior & Limite Inferior

bool aumento = true;
byte variable;
String limite="";

void setup() {
  // put your setup code here, to run once:
  variable = 0;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(variable);
  Serial.print(limite);
  limite="";


  if(aumento){
    variable++;
    if(variable == 255){
      aumento = false;
      limite="llego al limite superior\n";
    }
  }
  else{
    variable--;
    if(variable == 0){
      aumento = true;
      limite = "llego al limite inferior\n";
    }
  }
  delay(30);//ms = milisegundos
}
