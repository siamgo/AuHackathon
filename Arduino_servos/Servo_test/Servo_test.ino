#include <SoftwareServo.h>

SoftwareServo myservo;  // create servo object to control a servo 

#define pinServo 9

int limits[2] = {0,120};  // set limitations (min/max: 0->180)
boolean refresh = false;  // toggle refresh on/off

void setup() 
{ 
  Serial.begin(9600);

  // attaches the servo on pin to the servo object
  myservo.attach(pinServo);  
  myservo.setMaximumPulse(2400);
  // init angle of servo inbetween two limitations
 
} 

void loop() 
{ 
  // refresh angle
  int currentAngle = myservo.read();
  Serial.print("myservo: ");
  Serial.println(myservo.read());
  int angle = limits[0];

  if(currentAngle <= limits[0])
  {
     angle = limits[1];
  }
  myservo.write(angle); 

  delay(5);

  // set refresh one time / 2
SoftwareServo::refresh();

  Serial.print("Angle: ");
  Serial.println(angle);
  Serial.println(currentAngle);
} 
