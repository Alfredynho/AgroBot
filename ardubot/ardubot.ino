
const int led1=12; //Declaramos la variable led1.
const int led2=2; //Declaramos la variable led2.
 
unsigned int dato; //Declaramos una variable "dato" en donde se guardaran los valores recibidos desde Python.
 
void setup() {
  Serial.begin(9600); //Inicializamos la comunicacion Serial a 9600 Baudios
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT); //Definimos los pines de los leds como Salidas
  
}
 
void loop() {
    while(Serial.available()>0){  //Comprobamos que la comunicacion serial este disponible.
      dato=Serial.read(); //Leemos el puerto serial y guardamos los valores en la variable "dato"
      
      /*En el siguiente codigo se compara el valor de "dato" y segun sea el caso actua de distintas maneras*/
      //Enciende o apaga los leds
        if(dato=='Y')digitalWrite(led1,HIGH);
        if(dato=='N')digitalWrite(led1,LOW);
        if(dato=='E')digitalWrite(led2,HIGH);
        if(dato=='F')digitalWrite(led2,LOW);
 
        
    }
  
}
