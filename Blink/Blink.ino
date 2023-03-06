/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

//Programmer: Cameron Loukes
//Date: 3.3.2023
//Program: Blink

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);   // turn Pin 12 to HIGH so LED turns on
  digitalWrite(11, HIGH);   // turn Pin 11 to HIGH so LED turns on
  digitalWrite(10, HIGH);   // turn Pin 10 to HIGH so LED turns on
  delay(1000);                       // wait for a second
  digitalWrite(12, LOW);    // turn Pin 12 to LOW so LED turns off
  digitalWrite(11, LOW);    // turn Pin 11 to LOW so LED turns off
  digitalWrite(10, LOW);    // turn Pin 11 to LOW so LED turns off
  delay(1000);                       // wait for a second



 digitalWrite(12, HIGH);   // turn Pin 12 to HIGH so LED turns on
  delay(2000);                       // wait for two seconds
  digitalWrite(12, LOW);    // turn Pin 12 to LOW so LED turns off
  delay(250);                       // wait for a quarter-of-a-second
}
