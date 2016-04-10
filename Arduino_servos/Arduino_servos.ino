#include <SoftwareServo.h>

SoftwareServo servo1;
SoftwareServo servo2;
SoftwareServo servo3;
SoftwareServo servo4;
SoftwareServo servo5;

int ledPin = 7;
String toRead;


void setup()
{
  servo1.attach(9);
  servo1.setMaximumPulse(2400);
  servo2.attach(10);
  servo2.setMaximumPulse(2400);
  servo3.attach(11);
  servo3.setMaximumPulse(2400);
  servo4.attach(12);
  servo4.setMaximumPulse(2400);
  servo5.attach(13);
  servo5.setMaximumPulse(2400);

}

void loop()
{
  if (Serial.available() > 0)
  {
    toRead = Serial.readString();
    Serial.print("Doing gesture: ");
    Serial.println(toRead);
    if (toRead == "fist")
    {
      // all to 60
      servo1.write(0);
      servo2.write(0);
      servo3.write(0);
      servo4.write(0);
      servo5.write(0);
      delay(5);
      SoftwareServo::refresh();
    }
    if(toRead == "wavein")
    {
      // 2-5 -> 30
      servo2.write(30);
      servo3.write(30);
      servo4.write(30);
      servo5.write(30);
      delay(5);
      SoftwareServo::refresh();
    }
    
    if(toRead == "waveout")
    // 2-4 -> 100, 1-> 110
    {
      servo1.write(110);
      servo2.write(100);
      servo3.write(100);
      servo4.write(100);
      delay(5);
      SoftwareServo::refresh();

    }
    if(toRead == "fingers")//rest
    {
      // all to 120
      servo1.write(120);
      servo2.write(120);
      servo3.write(120);
      servo4.write(120);
      servo5.write(120);
      delay(5);
      SoftwareServo::refresh();

    }
    if(toRead == "doubleTab")
    {
        // 1,3 -> 60; 120; 60 (120)
      servo1.write(60);
      servo2.write(60);
      servo3.write(60);
      delay(5);
      servo1.write(120);
      servo2.write(120);
      servo3.write(120);
      delay(5);
      servo1.write(60);
      servo2.write(60);
      servo3.write(60);
      delay(5);
    }
     SoftwareServo::refresh();
  }
     
  // and loop forever and ever!
}

//    digitalWrite(ledPin, HIGH);   // sets the LED on
//    delay(1000);                  // waits for a second
//    digitalWrite(ledPin, LOW);    // sets the LED off
//    delay(1000);
