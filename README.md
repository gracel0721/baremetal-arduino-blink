# baremetal-arduino-blink
Arduino Blink in Baremetal raw C programming 

This code runs the classic Arduino Blink program in Raw C, specifically for the Arduino Uno R3

Run ```make``` in the command line to run the makefile, then ```make deploy``` to deploy the code to your arduino

The "Classic Blink" makes the built in led blink. 
The "blink circuit" makes an external led (hooked up to Pin 6) blink. 

Note: I couldn't get the makefile to work in the VSCode command line, but If i run the commands indivivually in the command line terminal, this program works
