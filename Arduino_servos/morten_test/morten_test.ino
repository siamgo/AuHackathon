#include <SoftwareServo.h>

SoftwareServo servo1;
SoftwareServo servo2;
SoftwareServo servo3;
SoftwareServo servo4;
SoftwareServo servo5;

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
  servo5.attach(8);
  servo5.setMaximumPulse(2400);
}

void loop(){
  if ( Serial.available()) {
    char ch = Serial.read();
    switch(ch) {
       case 'F':
      servo1.write(40);
      servo2.write(40);
      servo3.write(40);
      servo4.write(40);
      servo5.write(40);
        delay(5);
        Serial.println("Doing fist");
        break;
        
      case 'W':
      servo1.write(80);
      servo2.write(120);
      servo3.write(80);
      servo4.write(80);
      servo5.write(120);
        delay(5);
        Serial.println("Doing wave in");
        break;

      case 'V':
      servo1.write(120);
      servo2.write(120);
      servo3.write(120);
      servo4.write(120);
      servo5.write(120);
        delay(5);
        Serial.println("Doing wave out");
        break;

      case 'R':
      servo1.write(20);
      servo2.write(20);
      servo3.write(20);
      servo4.write(20);
      servo5.write(20);
      delay(5);
      Serial.println("Reverting to start position");
      break;
      
      case 'T':
      servo1.write(40);
      servo2.write(40);
      servo3.write(40);
      servo4.write(40);
      servo5.write(40);
      delay(5);
      Serial.println("Doing Tab of fingers");
      break;

      case 'S':
      servo1.write(120);
      servo2.write(120);
      servo3.write(120);
      servo4.write(120);
      servo5.write(120);
      delay(5);
      Serial.println("Doing finger spread");
      break;
    }
  }
  SoftwareServo::refresh();
}
