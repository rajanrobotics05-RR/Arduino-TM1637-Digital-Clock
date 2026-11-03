/*
Created by Balaji for Rajan Robotics
*/

#include <Arduino.h>
#include <TM1637Display.h>

// Define the digital pins used for the TM1637 module
#define CLK 3
#define DIO 2

// Create an instance of the TM1637Display class
TM1637Display display(CLK, DIO);

void setup() {
  // Set the brightness (0 to 7)
  display.setBrightness(7);
  Serial.begin(9600);
}

int hr=19;
int min=54;
int sec=50;
int time=0;
unsigned long previousmillis = 0;

void loop() {
unsigned long currentmillis= millis();
if(currentmillis-previousmillis > 1000)
{
  sec++;
  previousmillis=currentmillis;
}
//delay(1000);
//sec++;
//Serial.print("sec=");
//Serial.println(sec);
if(sec>59){
  min++;
  sec=0;
}

if(min>59){
  hr++;
  min=0;
}
//time=min*100+sec;//min min : sec sec
time=hr*100+min;// hr hr : min min
time_display();
  display.showNumberDecEx(time,0x40,true);
  //Serial.println(time);
  delay(1000);
  // Clear the display
  display.clear();
  //delay(1000);
}

void time_display(){
Serial.print(hr);
Serial.print(" : ");
Serial.print(min);
Serial.print(" : ");
Serial.println(sec);
}
