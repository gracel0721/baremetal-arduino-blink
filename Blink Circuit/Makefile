help:
	@echo 'Help details:'
	@echo 'hex: compile hex file'
	@echo 'flash: install hex file'
	@echo 'program: compile hex and install'

default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o ledBlink.o ledBlink.c
	avr-gcc -o ledBlink.bin ledBlink.o
	avr-objcopy -O ihex -j .text -j .data -R .eeprom ledBlink.bin ledBlink.hex

.PHONY: deploy
deploy:
# set "/dev/ttyACM0" to the port your arduino is connected to
	avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:ledBlink.hex
