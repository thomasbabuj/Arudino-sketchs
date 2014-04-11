/* Blink

   Turns on an LED on for one second 
   then off for one second, repeatedly.
   
*/

void setup(){
  // Initialize the digital pin as an output
  // Pin 13 has an LED connected
  pinMode(13, OUTPUT);
}  
void loop() {
  digitalWrite(13, HIGH); // set the LED on
  delay(1000); // wait for a second
  digitalWrite(13, LOW); // set the LED off
  delay(1000); // wait for a second
}
