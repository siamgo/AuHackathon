#include <SoftwareServo.h>

SoftwareServo servo1;
SoftwareServo servo2;
SoftwareServo servo3;
SoftwareServo servo4;
SoftwareServo servo5;


void setup()
{
  servo1.attach(8);
  servo1.setMaximumPulse(2400);
  servo2.attach(9);
  servo2.setMaximumPulse(2400);
  servo3.attach(10);
  servo3.setMaximumPulse(2400);
  servo4.attach(11);
  servo4.setMaximumPulse(2400);
  servo5.attach(12);
  servo5.setMaximumPulse(2400);
  
}

void loop(){
  if ( Serial.available()) {
    char ch = Serial.read();
    switch(ch) {
       case 'F':
      servo1.write(180);
      servo2.write(180);
      servo3.write(180);
      servo4.write(180);
      servo5.write(180);
        delay(5);
        Serial.println("Doing fist");
        break;
        
      case 'W':
      servo2.write(180);
      servo3.write(180);
      servo4.write(180);
      servo5.write(180);
        delay(5);
        Serial.println("Doing wave in");
        break;

      case 'V':

      servo2.write(170);
      servo3.write(120);
      servo4.write(90);
      servo5.write(90);
        delay(5);
        Serial.println("Doing wave out");
        break;

      case 'R':
      servo1.write(0);
      servo2.write(0);
      servo3.write(0);
      servo4.write(0);
      servo5.write(0);
      delay(5);
      Serial.println("Reverting to start position");
      break;
      
      case 'T':
      servo1.write(180);
      servo3.write(180);
      delay(500);
  SoftwareServo::refresh();
      servo1.write(0);
      servo3.write(0);
      delay(500);
        SoftwareServo::refresh();
      servo1.write(180);
      servo3.write(180);
      delay(500);
      Serial.println("Doing Tab of fingers");
      break;

      case 'S':
    
      servo2.write(180);
      
      servo4.write(180);
      servo5.write(180);
      delay(5);
      Serial.println("Doing finger spread");
      break;
    }
  }
  SoftwareServo::refresh();
}
