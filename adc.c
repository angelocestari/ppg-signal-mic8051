#include "defs.h"
#include "adc.h"
#include "util.h"

volatile unsigned int nova_amostra = 0;
volatile __bit amostra_disp = 0;

void config_adc0(unsigned char canal, unsigned char ganho) {
	ADC0CF = ADC0CF & 0xf8 | ganho;  // Set gain bits
	AMX0SL = canal;
	delay_us(1);  // (Rmux,Csample)
}

unsigned int le_adc0(void) {
	// Espera conversão no ADC0
	AD0BUSY = 1;
	reset_wdt();
	while (AD0BUSY) {}

	return ADC0H << 8 | ADC0L;
}

/*void ISR_TC2(void) __interrupt INTERRUPT_TIMER2 {
	// Conversão no ADC0
	AD0BUSY = 1;
	reset_wdt();
	while(AD0BUSY) {}

	nova_amostra = (ADC0H << 8 | ADC0L);
	amostra_disp = 1;
	TF2 = 0;
}*/

void ISR_ADC0(void) __interrupt INTERRUPT_ADC0_EOC {
	nova_amostra = (ADC0H << 8 | ADC0L);
	amostra_disp = 1;
	AD0INT = 0;
}
