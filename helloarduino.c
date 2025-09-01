#define F_CPU 16000000UL

#include <util/delay.h>
#include <avr/io.h>

int main(void){
    // Port b pins = 8-13
    // port c = analog pins
    // port d = pins 0-7

    // PORT sets pin to high/low, read/write
    // DDR is data direction register - sets pins as input or output, read/write
    // PIN is input read only

// Default clock source is internal 8MHz RC oscillator


//Set pin 13 (built in led) as output
    DDRB |= (1 << DDB5);

    while (1)
    {
        //set pin 13 high
        PORTB |= (1 << PORTB5);
        _delay_ms(1000);

        //set pin 13 low
        PORTB &= ~(1 << PORTB5);
        _delay_ms(1000);
    }
    return 0;
}

    





