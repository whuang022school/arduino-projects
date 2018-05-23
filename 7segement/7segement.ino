
const byte num[10]={
    B1000000,  //0
    B1111001,  //1
    B0100100,  //2
    B0110000,  //3
    B0011001,  //4
    B0010010,  //5
    B0000010,  //6
    B1111000,  //7    
    B0000000,  //8
    B0010000   //9    
};

int buttonState = 0;  
const int seg[]={2,3,4,5,6,7,8};  //ABCDEFG
const int N[]={0,2,4,6,8,9,7,5,3,1};  //want display num 

void setup() 
{ 
   pinMode(10, INPUT);
  for(int i=0;i<7;i++)
    pinMode(seg[i],OUTPUT);
}
void loop() 
{
  if( digitalRead(10)){
   buttonState = 1;
  }
  if(buttonState){
    for(int i=0;i<10;i++)
    {
      for(int j=0;j<7;j++)
      {
        int l=N[i];
        if(bitRead(num[l],j))
          digitalWrite(seg[j],HIGH);
        else
          digitalWrite(seg[j],LOW);        
      }
      delay(1000);    
    } 
  }
  else{
    for(int j=0;j<7;j++)
    {
        digitalWrite(seg[j],HIGH);
     
    }
  }
}

