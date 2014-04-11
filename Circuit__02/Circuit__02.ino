/*
  POTENTIOMETER
  
  Measure the poistion of a potentiometer and use it to 
  control the blink rate of an LED. Turn the knob to make 
  it blink faster or slower!
  
  Its a same type of control we'd use to change volume,
  dim a lamp, etc. A potentiometer changes resistance as 
  it is turned.
  
  LED blink delay based on the potentiometer value
*/

int sensorPin = 0;  // The potentiometer is connect to analog
                    // pin 0
int ledPin = 13;  // LED is connected to digital pin 13

void setup() {
   pinMode(ledPin, OUTPUT); 
   Serial.begin(9600);
}

void loop() {
  int sensorValue;
  
  sensorValue = analogRead(sensorPin);
  
  Serial.print("Sesnor = ");
  Serial.print(sensorValue);
  Serial.print("\n");
 
  
  digitalWrite(ledPin, HIGH); // Turn the LED ON
  
  delay( sensorValue ); // Pause for sensorValue milliseconds
  
  digitalWrite(ledPin, LOW); // Turn the LED OFF
  
  delay(sensorValue);
}


