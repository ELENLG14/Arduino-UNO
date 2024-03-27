int LED = 7;
int BUZZER = 8;
int BOTON = 4;
int VALOR_DEL_BOTON = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(BUZZER,OUTPUT);
  pinMode(BOTON,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
VALOR_DEL_BOTON = digitalRead(BOTON);



if(VALOR_DEL_BOTON == HIGH){
 digitalWrite(LED,HIGH);
 tone(BUZZER,330);            
}



else{digitalWrite(LED,LOW);
 noTone(BUZZER);}
}