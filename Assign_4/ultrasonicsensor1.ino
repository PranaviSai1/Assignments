// C++ code
//
#include <Servo.h>
#define echo_pin 4
#define trigger_pin 3

Servo toll;
long duration;
int distance;

void setup(){
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trigger_pin, LOW);
  delay(100);
  digitalWrite(trigger_pin, HIGH);
  delay(100);
  digitalWrite(trigger_pin, LOW);
  duration = pulseIn(echo_pin, HIGH);
  distance = duration *0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
  if( distance = 4 && distance <= 50)
  {
  toll.write(90);
  delay(10000);
  }
  else
  {
  toll.write(0);
  delay(10000);
  }
}
  
