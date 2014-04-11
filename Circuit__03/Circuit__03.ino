/*
  RGB LED
  
  Make an RGB LED display a rainbow of colors!
  
  
*/


const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;

// This variable controls how fast we loop through the colors.

int DISPLAY_TIME = 100;

void setup() {
  
  pinMode( RED_PIN, OUTPUT );
  pinMode( GREEN_PIN, OUTPUT );
  pinMode( BLUE_PIN, OUTPUT );
  
}

void loop() {
  mainColors();
}

void mainColors() {
   // all LEDs off
   digitalWrite( RED_PIN, LOW );
   digitalWrite( GREEN_PIN, LOW );
   digitalWrite( BLUE_PIN, LOW );
   
   delay(1000);
   
   // RED LED on
   digitalWrite( RED_PIN, HIGH );
   digitalWrite( GREEN_PIN, LOW );
   digitalWrite( BLUE_PIN ,LOW ); 
   
   delay( 1000 );
   
   // GREEN LED on
   digitalWrite( RED_PIN, LOW );
   digitalWrite( GREEN_PIN, HIGH);
   digitalWrite( BLUE_PIN ,LOW );
   
   delay( 1000 );

   // BLUE LED on
   digitalWrite( RED_PIN, LOW );
   digitalWrite( GREEN_PIN, LOW );
   digitalWrite( BLUE_PIN ,HIGH );    
   
   delay ( 1000 );
   
   // YELLOW ( RED AND GREEN LED on )
   digitalWrite( RED_PIN, HIGH );
   digitalWrite( GREEN_PIN, HIGH );
   digitalWrite( BLUE_PIN ,LOW );
   
   delay ( 1000 );

   // Cyan ( GREEN and BLUE LED on )
   digitalWrite( RED_PIN, LOW );
   digitalWrite( GREEN_PIN, HIGH );
   digitalWrite( BLUE_PIN , HIGH );
  
   delay ( 1000 );   

   // Purple ( RED and BLUE LED on )
   digitalWrite( RED_PIN, HIGH );
   digitalWrite( GREEN_PIN, LOW );
   digitalWrite( BLUE_PIN ,HIGH );
   
   delay ( 1000 );   

  // White ( all LEDs on )
   digitalWrite( RED_PIN, HIGH );
   digitalWrite( GREEN_PIN, HIGH );
   digitalWrite( BLUE_PIN , HIGH ); 
  
   delay ( 1000 );
   
}

