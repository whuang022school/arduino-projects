int ledOrange=13;
int ledBlue=12;

void setup() {
  pinMode(ledOrange, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop() {
  digitalWrite(ledOrange, HIGH);   
  digitalWrite(ledBlue, LOW); 
  delay(500);  
                       
  digitalWrite(ledOrange, LOW);
  digitalWrite(ledBlue, HIGH);    
  delay(500);                       
}
