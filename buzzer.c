#include "defs.h"
#include "util.h"
#include "buzzer.h"

#define BUZZER_PIN P2_7
#define TEMPO_BIP 50000

static unsigned int tempo_inicial = 0;

void buzzer_on(void) {
	EIE2 |= ~0xfe;
}

void buzzer_off(void) {
	EIE2 &= 0xfe;
}

void buzzer_bip(void) {
	buzzer_on();
	tempo_inicial = tempo_us;
}

void atualiza_buzzer(void) {
	if (tempo_us - tempo_inicial > TEMPO_BIP) {
		buzzer_off();
	}
}

void ISR_TC3(void) __interrupt INTERRUPT_TIMER3 {
	SFRPAGE = TMR3_PAGE;
	TF3 = 0;
	SFRPAGE = LEGACY_PAGE;
	BUZZER_PIN = !BUZZER_PIN;
}
