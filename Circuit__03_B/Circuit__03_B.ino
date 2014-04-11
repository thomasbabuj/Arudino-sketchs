/* 

  RGB LED with Potentiometer
  
  Based on Potentiometer values change the display the relavent color in the LED
  
*/

 const int analogInPin = A0;
 const int redPin = 9;
 const int greenPin = 10;
 const int bluePin = 11;
 
 int sensorValue = 0;
 int outputValue = 0;
 int tempSensorValue =0;

 
 void setup() {
   
   pinMode(redPin, OUTPUT);
   pinMode(greenPin, OUTPUT);
   pinMode(bluePin, OUTPUT);
   
   Serial.begin(9600);
 }
 
 void loop() {
   
   sensorValue = analogRead(analogInPin);
   showRGB( sensorValue );
   if ( tempSensorValue != sensorValue ) {
      tempSensorValue = sensorValue;
      printSensorValue(sensorValue, tempSensorValue);      
   }
   
   
 }
 
  void printSensorValue(int sensorValue, int temp)
 {
      Serial.print( "Sensor = ");
      Serial.print(sensorValue);
      Serial.print("  Temp = ");
      Serial.print(temp );
      Serial.print( "\n");
 }
 
 void showRGB(int color) {
   int redIntensity, greenIntensity, blueIntensity;
   
   if ( color <= 255 ) {
     redIntensity = 255-color;
     greenIntensity = color;
     blueIntensity = 0;
   } else if ( color <= 511 ) {
     redIntensity = 0;
     greenIntensity = 255 - ( color- 256 );
     blueIntensity = (color-256);
   } else {
     redIntensity = (color-512);
     greenIntensity = 0;
     blueIntensity = 255 - ( color-512);
   }
   
   analogWrite( redPin, redIntensity );
   analogWrite( bluePin, blueIntensity );
   analogWrite( greenPin, greenIntensity );
   
   
 }



