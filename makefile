help:
	@echo 'Help details:'
	@echo 'hex: compile hex file'
	@echo 'flash: install hex file'
	@echo 'program: compile hex and install'

default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o helloarduino.o helloarduino.c
	avr-gcc -o helloarduino.bin helloarduino.o
	avr-objcopy -O ihex -j .text -j .data -R .eeprom helloarduino.bin helloarduino.hex

.PHONY: deploy
deploy:
	avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:helloarduino.hex
