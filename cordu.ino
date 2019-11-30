#include <Wire.h>
int val11;
float val2;
String a="\nDistance: 320";

void setup()
{

  Serial.begin(9600);
  //Serial.println("Emartee.Com");
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  Serial.print("Distance: 320");
}
void loop()
{
//  Serial.println(analogRead(A0));
//  {Serial.println('o');}
  float V0=float(analogRead(A0));
  float V1=float(analogRead(A1));
  float V2=float(analogRead(A2));
//Serial.println(String(V0)+','+String(V1)+','+String(V2));
//delay(2000);
  Serial.print("");
  if(V0<100)
  {
//    Serial.println(V0);
//    Serial.println(V1);
//    Serial.println(V2);
    
    Serial.print("\nDistance: 160");
    a=("\nDistance: 160");
  }
  else if(V1<100)
  {
    Serial.print("\nDistance: 320");
    a=("\nDistance: 320");
  }
  else if(V2<100)
  {
    Serial.print("\nDistance: 480");
    a=("\nDistance: 480");
  }
  else
  {
    Serial.print(a);
  }
//  delaypppppp/.);
}
