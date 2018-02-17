#include<Wire.h>


int sensePin=0;
int sensePin1=1;
int led=7;
int led1=8;


void setup()
{
   pinMode(sensePin,INPUT);
   pinMode(sensePin,INPUT);
   pinMode(led,OUTPUT);
   pinMode(led1,OUTPUT);
   Wire.begin(9600);
   Serial.begin(9600);
}

void loop()
{
  int val=analogRead(sensePin);
  
  Serial.println(val);
  
  int val1=map(val,200,600,0,180);
  if ( val>=100 && val<=600)
  {
     digitalWrite(led,HIGH);
  }
  else
  {
     digitalWrite(led,LOW);
  }
  Wire.beginTransmission(100);
  Wire.write(val1);
  Wire.endTransmission();
  int spd=analogRead(sensePin1);
  if(spd>=100 && spd<=600)
  {
     digitalWrite(led1,HIGH);
  }
  else
  {
     digitalWrite(led1,LOW);
  }
  //delay(15);
  int spd1=map(spd,100,600,0,180);
  Wire.beginTransmission(150);
  Wire.write(spd1);
  Wire.endTransmission();
  //delay(15);
   
}

