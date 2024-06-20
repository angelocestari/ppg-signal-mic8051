#include "defs.h"
#include "util.h"

volatile unsigned int tempo_us = 0;

void reset_wdt(void) {  // max 41,943 ms
	WDTCN = 0xA5;
}

void config_tc0(void) {
	TMOD &= ~0x01;
	TMOD |= 0x02;

	TR0 = 0;
	TF0 = 0;
	TH0 = 0xe7;
	TL0 = 0xe7;
	ET0 = 1;
	TR0 = 1;
}

void delay_ms(unsigned int t) {
	for (; t > 0; t--) {
		delay_us(1000);
	}
}

void delay_us(unsigned int t) {
	unsigned int t_inicial = tempo_us;
	while (tempo_us - t_inicial < t) {}
}

void ISR_TC0(void) __interrupt INTERRUPT_TIMER0 {
	tempo_us++;
	TF0 = 0;
}

