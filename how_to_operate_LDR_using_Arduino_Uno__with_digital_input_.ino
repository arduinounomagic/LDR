
/*
*How to operate LDR using Arduino uno (with digital input)
*This code discribes that how an Light dependent resistor can be operated with digital input using Arduino Uno.
*
*Copyright (C) 2007 Free Software Foundation, Inc. <arduinounomagic@gmail.com>
*for more projects based on Arduino uno please visit: https://arduinounomagic.blogspot.com/
*/


#define LDR 12 //Light dependent resistor connected to digital pin 12
#define LED 5 //LED connected to digital pin 5
int LDR_value; //variable to store result value read by LDR

void setup()
{
Serial.begin(9600); //intialize the serial port for communicaion
pinMode(LED, OUTPUT); // set LED as output
pinMode(LDR, INPUT); //set light dependent resistor as input

}

void loop()
{
 
 LDR_value=digitalRead(LDR); // Read the data from digital pin 12 and store in LDR_value



if (LDR_value==LOW) //if LDR_value value is low that means its dark outside so LED should be turn on
{
   digitalWrite(LED, HIGH);//turn on the LED
   
  
  Serial.println("its dark turn on the LED");// display "its dark turn on the LED" on serial monitor and set the cursor to the new line
  Serial.println("LDR value:");//display "LDR value:" on serial monitor and set the cursor to the new line
  Serial.println(LDR_value);// print the value of sensor
 
}
else //if LDR_value value is high that means its bright outside so LED should be turn off
{
   digitalWrite(LED, LOW);//turn off the LED
   Serial.println("its bright turn off the LED");// display "its bright turn off the LED" on serial monitor and set the cursor to the new line
   Serial.println("LDR value:");//display "LDR value:" on serial monitor and set the cursor to the new line
    Serial.println(LDR_value);// print the value of sensor
}
delay(200);// delay

}
