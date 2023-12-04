#include <Arduino.h>
#include <M5Core2.h>

void setup()
  {
  M5.begin();
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setTextSize(4); 
  Serial.begin(115200);
  Serial.println("Ready to rock "); // Ready to receive commands
}

void loop() {
  Serial.println("MEA 1 3");
  while (Serial.available() == 0) {}     //wait for data available
  String teststr = Serial.readString();  //read until timeout
  //teststr.trim();                        // remove any \r \n whitespace at the end of the String
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(0, 30);
    M5.Lcd.print(teststr);
    Serial.println(teststr);
    delay(2000);

}