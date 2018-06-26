
int potpin=A0;  
int ledpin=11; 
int nowlight=0; 
int outlight=0;
int maxlight=900;
int minlight=600;

void setup(){
  pinMode(ledpin,OUTPUT); 
  Serial.begin(9600);
}


void loop(){
  nowlight=analogRead(potpin);
  Serial.println(nowlight);
  outlight = map(nowlight,minlight, maxlight, 0, 255);
  if(nowlight<minlight){
      outlight=0;
  }
  analogWrite(ledpin,outlight);
  delay(2) ;
}
