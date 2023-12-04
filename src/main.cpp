#include <Arduino.h>
#include <M5Core2.h>


//int inByte; // Stores incoming command 

void setup()
  {
  M5.begin();
  M5.Lcd.setSwapBytes(true);
  M5.Lcd.fillScreen(BLACK);


  Serial.begin(115200);
  //pinMode(13, OUTPUT); // Led pin
  Serial.println("Type 1: LED ON, 0: LED OFF "); // Ready to receive commands
}

void loop() {
  Serial.println("MEA 1 3");
  while (Serial.available() == 0) {}     //wait for data available
  String teststr = Serial.readString();  //read until timeout
  //teststr.trim();                        // remove any \r \n whitespace at the end of the String
    M5.Lcd.drawString(teststr,10,40,2);
    Serial.println(teststr);
    delay(2000);

}