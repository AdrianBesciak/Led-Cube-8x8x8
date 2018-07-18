/*
 * LED CUBE 8x8x8.c
 *
 * Created: 24.07.2017 14:28:46
 * Author : AdiOS
 */ 

#include "main.h"
#include "SPI.h"
#include "timer.h"
#include "UART.h"
#include "animations.h"

int main (void)
{	
	DDRA=0xFF;
	PORTA=0x01;
	timer_init();
	SPI_master_init();
	USART_Init(MYUBRR);
	sei();
	while (1)
	{
		;		
	}
}

