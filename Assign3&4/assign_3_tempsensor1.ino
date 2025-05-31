// C++ code
//
int sensorPin = A0;
int LED_r=4;
int LED_y=8;
int LED_g=7;
int LED_b=2;
//int sensorPin = A0;
//int reading = analogRead(sensorPin);
//float voltage = reading * (4.68 / 1024.0); // Adjust 4.68 to your actual 5V line if needed
//float temperatureC = ((voltage - 0.5) * 100);
//map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);


void setup()
{
  pinMode(sensorPin, INPUT);
  pinMode(LED_r, OUTPUT);
  pinMode(LED_y, OUTPUT);
  pinMode(LED_g, OUTPUT);
  pinMode(LED_b, OUTPUT);
  Serial.begin(9600);
 
}

void loop()
{
  int reading = analogRead(sensorPin);
  float voltage = reading * (4.68/1024.0);
  float temperatureC = ((voltage - 0.5) * 100);
  
  
  Serial.print("Temperature");
  Serial.println(temperatureC);
  
  if(temperatureC >= -40 && temperatureC <= 0)
  {
     digitalWrite(LED_r,HIGH);
    // delay(2000);
     digitalWrite(LED_y,LOW);
     digitalWrite(LED_g,LOW);
     digitalWrite(LED_b,LOW);
  }

  else if(temperatureC >= 1  && temperatureC <= 40)
  {
     digitalWrite(LED_r,LOW);
     digitalWrite(LED_y,HIGH);
     //delay(2000);
     digitalWrite(LED_g,LOW);
     digitalWrite(LED_b,LOW);
  }
   else if(temperatureC >= 41 && temperatureC <= 75)
   {
     digitalWrite(LED_r,LOW);
     digitalWrite(LED_y,LOW);
     digitalWrite(LED_g,HIGH);
    // delay(2000);
     digitalWrite(LED_b,LOW);
  }
   else if(temperatureC >=76 && temperatureC <120)
   {
     digitalWrite(LED_r,LOW);
     digitalWrite(LED_y,LOW);
     digitalWrite(LED_g,LOW);
     digitalWrite(LED_b,HIGH);
     //delay(2000);
  }
  else
  {
     digitalWrite(LED_r,LOW);
     digitalWrite(LED_y,LOW);
     digitalWrite(LED_g,LOW);
     digitalWrite(LED_b,LOW);
  }
  delay(1000);
  
}



