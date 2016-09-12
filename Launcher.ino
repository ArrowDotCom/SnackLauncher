/* This code is for a servo motor connected to a spoon or other arm.
 *  This particular project was powered by the Adafruit Metro board, similar
 *  to an Arduino Uno.  You can find the micro servo used in the video on arrow.com
 *  (https://www.arrow.com/en/products/169/adafruit-industries)
 *  
 *  Thanks for making with us! 
 *  #makewitharrow
 */

#include <Servo.h>

Servo launch;
long randNumber;
long launchdelay;
long launchstrength;

void setup() {
  launch.attach(2);
  Serial.begin(9600);
  randomSeed(analogRead(1));

}

void loop() {
  
  //launch.write(20);
  //delay(100);
  launchdelay = random(5,10); //randomize how long you wait before launch
  launchstrength = random(5,15); //randomize launch angle by randomizing the final servo angle

  launch.write(85);
  delay(100);
  Serial.print(launchdelay);
  Serial.print("     ");
  delay(launchdelay*1000); //wait as long as the random number said you should
  launch.write(launchstrength);  //launch! 
  Serial.println(launchstrength);
  delay(1000); //wait a tic
  launch.write(85); //return to a good loading position
 // delay(10000); //wait 10 seconds for you to go reload

}





