int potpin=A0;  //定義類比端口0 連接光敏電阻
int ledpin=11; //定義數位端口11 輸出PWM 調節LED 亮度
int val=0;        //定義變數val
int out=0;

void setup()
{
pinMode(ledpin,OUTPUT); //定義數位端口11 為輸出
Serial.begin(9600);              //設置baud rate為9600
}


void loop()
{
val=analogRead(potpin);//讀取感測器CDS的類比值並賦值給val

Serial.println(val);                   //顯示val 變數數值 於PC 螢幕上 需開啟 serial monitor 
  out = map(val, 600, 900, 0, 255);
if(val<600){
  out=0;
}
analogWrite(ledpin,out);         // 打開LED 並設置亮度（PWM 輸出最大值255）

delay(2) ;                                //延時0.01 秒
}
