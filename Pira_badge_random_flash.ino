/*
* IRA lightning badge
* AAPT summer 2018
*Randomly blinks the leds contained in the lightning bolt
*/

int ledPinA = 0; 
int ledPinB = 1;
int ledPinC = 2;
long randOn = 0;                  // Initialize a variable for the ON time
long randOff = 0;                 // Initialize a variable for the OFF time


void setup()                      // run once, when the sketch starts
{
randomSeed (analogRead (0));    // randomize
pinMode(ledPinA, OUTPUT);        
pinMode(ledPinB, OUTPUT);
pinMode(ledPinC, OUTPUT);
}

void loop()                       // run over and over again
{
randOn = random (10, 20);    // generate ON time between 0.01-.02 seconds
randOff = random (1500, 4000);    // generate OFF time between 1.5 and 4 seconds
 digitalWrite(ledPinA, HIGH);
 digitalWrite(ledPinB, HIGH); 
 digitalWrite(ledPinC, HIGH);
 delay(randOn);                // waits for a random time while ON
 digitalWrite(ledPinA, LOW); 
 digitalWrite(ledPinB, LOW);
 digitalWrite(ledPinC, LOW);
 delay(randOff);               // waits for a random time while OFF
}

