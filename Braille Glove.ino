int TouchSensor1 = 9; 
int TouchSensor2 = 10;
int TouchSensor3 = 11; 
int TouchSensor4 = 12;
int TouchSensor5 = 13; 
int TouchSensor6 = 8;
int led = 13;
int x1=0;
int x2=0;
int x3=0;
int x4=0;
int x5=0;
int x6=0;
unsigned long StartReading;
unsigned long EndReading;
const unsigned long period=10000;
void setup(){
  Serial.begin(9600); 
  pinMode(led, OUTPUT);
  pinMode(TouchSensor1, INPUT);
  pinMode(TouchSensor2, INPUT);
  pinMode(TouchSensor3, INPUT);
  pinMode(TouchSensor4, INPUT);
  pinMode(TouchSensor5, INPUT);
  pinMode(TouchSensor6, INPUT);
  StartReading = millis();

}

void loop(){
  if(digitalRead(TouchSensor1)==HIGH)     
   {    
    x1=1;
   }

  if(digitalRead(TouchSensor2)==HIGH)       
   {  
    x2=1;
   }
  if(digitalRead(TouchSensor3)==HIGH)     
   {   
    x3=1; 
   }

  if(digitalRead(TouchSensor4)==HIGH)       
   { 
    x4=1;
   }
  if(digitalRead(TouchSensor5)==HIGH)     
   {    
    x5=1;
   }
  if(digitalRead(TouchSensor6)==HIGH)       
   {   
    x6=1;
   }
   EndReading = millis();

   if(EndReading-StartReading>=period){
   if(x1&&x2&&x4&&x5&&x6)
   Serial.print("Y");
   else if(x1&&x2&&x3&&x4&&x5)
   Serial.print("Q");
   else if(x1&&x2&&x3&&x4)
   Serial.print("G");
   else if(x1&&x2&&x4&&x5)
   Serial.print("N");
   else if(x1&&x2&&x3&&x5)
   Serial.print("P");
   else if(x1&&x3&&x4&&x5)
   Serial.print("R");
   else if(x2&&x3&&x4&&x5)
   Serial.print("T");
   else if(x1&&x3&&x5&&x6)
   Serial.print("V");
   else if(x2&&x3&&x4&&x6)
   Serial.print("W");
   else if(x1&&x2&&x5&&x6)
   Serial.print("X");
   else if(x1&&x4&&x5&&x6)
   Serial.print("Z");
   else if(x1&&x2&&x4)
   Serial.print("D");
   else if(x1&&x2&&x3)
   Serial.print("F");
   else if(x1&&x3&&x4)
   Serial.print("H");
   else if(x2&&x3&&x4)
   Serial.print("J");
   else if(x1&&x3&&x5)
   Serial.print("L");
   else if(x1&&x2&&x5)
   Serial.print("M");
   else if(x1&&x4&&x5)
   Serial.print("O");
   else if(x2&&x3&&x5)
   Serial.print("S");
   else if(x1&&x4&&x5)
   Serial.print("U");
   else if(x1&&x3)
   Serial.print("B");
   else if(x1&&x2)
   Serial.print("C");
   else if(x2&&x3)
   Serial.print("I");
   else if(x1&&x4)
   Serial.print("E");
   else if(x1&&x5)
   Serial.print("K");
   else if(x1)
   Serial.print("A");
   
   else if(x5)
   Serial.print("_");

   x1=0;
   x2=0;
   x3=0;
   x4=0;
   x5=0;
   x6=0;
   StartReading=EndReading;
   }

   delay(50);

}