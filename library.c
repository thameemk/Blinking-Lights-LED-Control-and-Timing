/*
 * BlinkingLED.c
 *
 * Created: 22-04-2020 10.45.40 PM
 * Author : thameem
 */ 

#include <avr/io.h>
#include <util/delay.h>

/* Replace with your library code */
int main(void)
{
	DDRC = 0xFF; //Output port is C
	while (1) // helps to make infinite loop
	{
		PORTC = 0XFF; //turn on led => logic high
		_delay_ms(500); //making delay half second
		PORTC = 0X00; //turn off led =>logic low
		_delay_ms(1000); //making delay one second
	}
	return 0;
}

