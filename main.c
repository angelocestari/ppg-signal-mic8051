#include "defs.h"
#include "util.h"
#include "adc.h"
#include "buzzer.h"
#include "eeprom.h"
#include "filtro.h"
#include "glcd.h"
#include "uart0.h"
#include "stdio.h"

#include "config.c"

#define NUM_AMOSTRAS 256

// Flags
static __bit batida_detec = 0;
static __bit botao = 0;
static __bit glcd_ativo = 1;

void backup_dados(void) {
	unsigned char ini_idx = eeprom_idx;
	unsigned char i = ini_idx;
	do {
		i = (i+1) % EEPROM_SIZE;
		envia_uart0(le_eeprom(i));
	} while (i != ini_idx);
}

void setup(void) {
	Init_Device();
	SFRPAGE = LEGACY_PAGE;
	config_tc0();
	init_GLCD();
	config_adc0(ADC0_AIN1, ADC0_GAIN_05);
}

void main(void) {
	float glcd_ver_min = 1100, glcd_ver_max = 2756;
	unsigned char glcd_hor = 0;
	setup();
	limpa_glcd();
	buzzer_bip();

	while (1) {
		if (!P1_7) {
			buzzer_off();
		}
		if (!P1_6) {
			if (glcd_ativo) {
				glcd_ativo = 0;
				limpa_glcd();
				glcd_hor = 0;
			}
			buzzer_bip();
		}
		if (!P1_5) {
			glcd_ativo = 1;
			buzzer_bip();
		}
		if (batida_detec) {
			buzzer_bip();
		}
		if (uart0_flag) {
			uart0_flag = 0;
			switch (uart0_data) {
			case 'b':
				backup_dados();
				break;
			default:
			}
		}
		if (amostra_disp) {  // Atualiza GLCD
			amostra_disp = 0;
			guarda_buffer(nova_amostra);
			guarda_eeprom(nova_amostra);
			if (glcd_ativo) {
				limpa_col_glcd(glcd_hor);
				ponto_glcd(glcd_hor, escala_glcd(nova_amostra, glcd_ver_min, glcd_ver_max));
				glcd_hor = (glcd_hor + 1) % GLCD_WIDTH;
			}
		}
		atualiza_buzzer();
		reset_wdt();
	}
}
