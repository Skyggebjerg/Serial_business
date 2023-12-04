#include <Arduino.h>

int inByte; // Stores incoming command 

void setup()
{
  Serial.begin(115200);
  //pinMode(13, OUTPUT); // Led pin
  Serial.println("Type 1: LED ON, 0: LED OFF "); // Ready to receive commands
}

void loop()
{
  if (Serial.available() > 0)
  { // A byte is ready to receive
    inByte = Serial.read();
    if (inByte == '1') { // byte is '1'
      //digitalWrite(13, HIGH);
      Serial.println("LED - On");
    } else { // byte isn't '1'
      //digitalWrite(13, LOW);
      Serial.println("LED - off");
    }
  }
}