#include "defs.h"
#include "uart0.h"
#include "util.h"

volatile __bit uart0_flag = 0;
volatile unsigned char uart0_data = 0;

void enable_uart0(void) {
	SCON0 |= 0x10u;
}

void disable_uart0(void) {
	SCON0 &= ~0x10u;
}

void envia_uart0(unsigned char dado) {
	SBUF0 = dado;
	reset_wdt();
	while (!TI0) {}
	TI0 = 0;
}

void ISR_UART0(void) __interrupt INTERRUPT_UART0 {
	if (RI0) {
		uart0_flag = 1;
		uart0_data = SBUF0;
		RI0 = 0;
	}
}
