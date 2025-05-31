// C++ code
//
int gassensor = 0;
const int gasSensorPin = A0;
const int threshold = 400;
int LED_g = 7;
int LED_r = 6;
int BUZZER_pin = 5;

void setup(){
  Serial.begin(9600);
  pinMode(LED_g, OUTPUT);
  pinMode(LED_r, OUTPUT);
  pinMode(BUZZER_pin, OUTPUT);
}
void loop(){
  gassensor = analogRead(gasSensorPin);
  Serial.print("Gas Sensor Reading: ");
  Serial.println(gassensor);
  
  if(gassensor > threshold){
    digitalWrite(LED_g, LOW);
    digitalWrite(LED_r, HIGH);
    tone(BUZZER_pin, 200, 500);
  }
  else{
    digitalWrite(LED_g, HIGH);
    digitalWrite(LED_r, LOW);
    noTone(BUZZER_pin);
  }
  delay(100);
}