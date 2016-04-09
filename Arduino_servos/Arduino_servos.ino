int ledPin = 7;
String toRead;

void setup()
{
  Serial.begin(9600);  // Begin the serial monitor at 9600bps
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  if (Serial.available() >= 1)
  {
    toRead = Serial.readString();
    if (toRead == "fist")
    {
    digitalWrite(ledPin, HIGH);   // sets the LED on
    delay(1000);                  // waits for a second
    digitalWrite(ledPin, LOW);    // sets the LED off
    delay(1000);
    }
    if(toRead == "wavein")
    {
    digitalWrite(ledPin, HIGH);   // sets the LED on
    delay(1000);                  // waits for a second
    digitalWrite(ledPin, LOW);    // sets the LED off
    delay(1000);
    }
    if(toRead == "waveout")
    {
    digitalWrite(ledPin, HIGH);   // sets the LED on
    delay(1000);                  // waits for a second
    digitalWrite(ledPin, LOW);    // sets the LED off
    delay(1000);
    }
    if(toRead == "fingers")
    {
    digitalWrite(ledPin, HIGH);   // sets the LED on
    delay(1000);                  // waits for a second
    digitalWrite(ledPin, LOW);    // sets the LED off
    delay(1000);
    }
    if(toRead == "doubleTab")
      {
    digitalWrite(ledPin, HIGH);   // sets the LED on
    delay(1000);                  // waits for a second
    digitalWrite(ledPin, LOW);    // sets the LED off
    delay(1000);
    }
  }
    
  
  // and loop forever and ever!
}
