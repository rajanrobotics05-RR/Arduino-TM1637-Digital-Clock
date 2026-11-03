# Arduino Digital Clock using TM1637

**By Rajan Robotics – Vision to Reality**

## Project Overview
This project demonstrates a simple digital clock using Arduino UNO and a TM1637 4-digit 7-segment display.

The clock displays hours and minutes (HH:MM) and updates every second.

## Components Required
- Arduino UNO
- TM1637 4-Digit Display
- Jumper wires

## Pin Connections

| TM1637 | Arduino UNO |
|---|---|
| CLK | D3 |
| DIO | D2 |
| VCC | 5V |
| GND | GND |


## Arduino Library
Install the `TM1637Display` library from Arduino IDE Library Manager.

## Features
- Displays time in HH:MM format.
- Updates every second.
- Handles minute and hour rollover.
- Displays time using a 4-digit 7-segment display.

## Important Note
This is a basic demonstration clock. It uses Arduino's `millis()` function and does not retain accurate real-world time after power loss. For accurate timekeeping, an RTC module such as DS3231 can be added.

## Credits
Rajan Robotics  
Vision to Reality

## Project Poster
![Arduino Digital Clock](rajan_robotics_digital_clock_project_poster.png)
