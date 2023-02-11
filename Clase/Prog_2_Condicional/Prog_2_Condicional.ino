// 1.- Siempre deben estar void setup y void loop
// 2.- La declaración y asignación de variables se realiza igual que en java
// 3.- Unicamente se debe considerar que los tipos de dato son ligeramente diferentes
//  TAREA: INVESTIGAR LAS CAPACIDADES DE LOS TIPOS DE DATOS EN ARDUINO

int valor; // En java es de 4 bytes ---- en arduino es de 2 bytes

byte b; 

char c;

long l;

String s; //Con S mayúscula

bool boo;


int v[5]; //Los vectores se declaran y se utilizan como c++

//En arduino cuando se sobrepasa al limite del tipo de dato de una variable
//SE APLICA RESIDUO

byte variable;


void setup() {
  // put your setup code here, to run once:
  variable = 0;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(variable);

  if(variable < 255){
    variable++;
  }
  else{
    Serial.print("Se ha llegao al límite");
  }
  Serial.println();
  delay(250);//ms = milisegundos

  //Las condicionales se manejan igual que en java
}

