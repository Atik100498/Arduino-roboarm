
#include<Wire.h>
#include<Servo.h>
Servo motor;
void setup() 
{
  motor.attach(9);
  Wire.begin(150);
  Wire.onReceive( spd);
}

void loop()
{
    delay(10);

}
void spd(int spdf)
{
   while(Wire.available()>0)
   { 
     int val=Wire.read();
     motor.write(val);
     delay(20);
   }
}

