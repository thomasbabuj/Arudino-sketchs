/* POTENTIOMETER

   Analog input, anlog output, serial output
   
   Reads an analog input pin, maps the result to a range from 0 to 255
   and uses the result to set the PWM of an output pin.
   
   Also prints the results to the serial monitor.
   
   The circuit :
     * potentiometer connected to analog pin 0.
       Center pin of the potentiometer goes to the analog pin.
       side pins of the potentiometer go to +5v and ground
     * LED connected from digital pin 9 to ground
*/

const int analogInPin = A0;  // Analog input pin for the potentiometer
const int analogOutPutPin = 13; // analog output pin that the LED is attached 

int sensorValue = 0; // value read from the POT
int outputValue = 0; // value output to the PWM

void setup() {
  // Initialize serial communication at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0,255);
  // change the analog out values;
  analogWrite( analogOutPutPin, outputValue );

  // Print the results to the serial monitor:
  Serial.print("Sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t Output = ");
  Serial.println(outputValue);

  // Wait 2 milliseconds before the next loop 
  // for the analog to digital converter to settle 
  // after the last reading;
  delay(2);  
}
