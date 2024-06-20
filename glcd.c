#include "defs.h"
#include "glcd.h"
#include "util.h"

#include "string.h"
#include "stdio.h"
#include "fonte.c"

#define GLCD_ESQ 0
#define GLCD_DIR 1
#define GLCD_COD 0
#define GLCD_DAT 1
#define GLCD_CS1 P2_0
#define GLCD_CS2 P2_1
#define GLCD_RST P2_5
#define GLCD_RS P2_2
#define GLCD_RW P2_3
#define GLCD_ENABLE P2_4
#define GLCD_DB P4

#define VER_MAX (GLCD_HEIGHT - 1)
#define HOR_MAX (GLCD_WIDTH - 1)

unsigned char le_glcd(__bit cd, __bit cs) {
	unsigned char dado;
	GLCD_RW = 1; // Leitura
	GLCD_CS1 = cs; // Escolhe lado do display
	GLCD_CS2 = !cs;
	GLCD_RS = cd; // Comando ou dado. RS == D/I
	NOP4();
	GLCD_ENABLE = 1;
	NOP8();
	SFRPAGE = CONFIG_PAGE; // Para acessar P4 (para ler DB)
	dado = GLCD_DB;
	SFRPAGE = LEGACY_PAGE; // Volto para P0
	NOP4();
	GLCD_ENABLE = 0;
	NOP12();
	return dado;
}

void esc_glcd(unsigned char dado, __bit cd, __bit cs) {
	unsigned char status;

	reset_wdt();
	do {  // Checa status
		status = le_glcd(GLCD_COD, cs);
	} while (status & 0x80);

	GLCD_RW = 0; // Escrita
	GLCD_CS1 = cs; // Escolhe lado do display
	GLCD_CS2 = !cs;
 	GLCD_RS = cd; // Comando ou dado. RS == D/I
	SFRPAGE = CONFIG_PAGE; // Para acessar P4 (para ler DB)
	GLCD_DB = dado;
	SFRPAGE = LEGACY_PAGE; // Volto para P0
	NOP4();
	GLCD_ENABLE = 1;
	NOP12();
	GLCD_ENABLE = 0;
	SFRPAGE = CONFIG_PAGE; // Para acessar P4 (para ler DB)
	GLCD_DB = 0xFF;
	SFRPAGE = LEGACY_PAGE; // Volto para P0
	GLCD_RW = 1; // Necess?rio para desabilitar SRAM que usa o mesmo pino
	NOP12();
}

void conf_Y(unsigned  char y, __bit cs) {
	y = y & 0x7F;
	y = y | 0x40;
	esc_glcd(y, GLCD_COD, cs);
}

void conf_pag(unsigned  char pag, __bit cs) {
	pag = pag & 0x07; // estou protegendo os bits que me interessam
	pag = pag | 0xB8;
	esc_glcd(pag, GLCD_COD, cs);
}

void limpa_glcd(void) {
	unsigned char pag, hor;

	for (pag = 0; pag < 8; pag++) {
		conf_pag(pag, GLCD_ESQ);
		conf_pag(pag, GLCD_DIR);
		conf_Y(0, GLCD_ESQ);
		conf_Y(0, GLCD_DIR);
		for (hor = 0; hor < 64; hor++) {
			esc_glcd(0, GLCD_DAT, GLCD_ESQ);
			esc_glcd(0, GLCD_DAT, GLCD_DIR);
		}
	}
}

void init_GLCD(void) {
	// Estado inicial
	GLCD_ENABLE = 0;
	GLCD_CS1 = GLCD_CS2 = GLCD_RST = 1;
	SFRPAGE = CONFIG_PAGE;
	GLCD_DB = 0xFF;
	SFRPAGE = LEGACY_PAGE;

	// Aguarda por status
	reset_wdt();
	while (le_glcd(GLCD_COD, GLCD_ESQ) & 0x80) {}
	reset_wdt();
	while (le_glcd(GLCD_COD, GLCD_DIR) & 0x80) {}

	// Liga o controlador
	esc_glcd(0x3F, GLCD_COD, GLCD_ESQ);
	esc_glcd(0x3F, GLCD_COD, GLCD_DIR);

	// Y = 0
	esc_glcd(0x40, GLCD_COD, GLCD_ESQ);
	esc_glcd(0x40, GLCD_COD, GLCD_DIR);

	// X = 0
	esc_glcd(0xB8, GLCD_COD, GLCD_ESQ);
	esc_glcd(0xB8, GLCD_COD, GLCD_DIR);

	// Z = 0
	esc_glcd(0xC0, GLCD_COD, GLCD_ESQ);
	esc_glcd(0xC0, GLCD_COD, GLCD_DIR);
}

void putchar(char c) {
	static unsigned char coluna = 0;
	unsigned char lado = (coluna < 8) ? GLCD_ESQ : GLCD_DIR;

	if (1 <= c && c <= 8) {
		conf_pag(c-1, GLCD_ESQ);
		conf_pag(c-1, GLCD_DIR);
		conf_Y(0, GLCD_ESQ);
		conf_Y(0, GLCD_DIR);
		coluna = 0;
	}
	else {
		esc_glcd(fonte[c-32][0], GLCD_DAT, lado);
		esc_glcd(fonte[c-32][1], GLCD_DAT, lado);
		esc_glcd(fonte[c-32][2], GLCD_DAT, lado);
		esc_glcd(fonte[c-32][3], GLCD_DAT, lado);
		esc_glcd(fonte[c-32][4], GLCD_DAT, lado);

		esc_glcd(0, GLCD_DAT, lado);
		esc_glcd(0, GLCD_DAT, lado);
		esc_glcd(0, GLCD_DAT, lado);

		coluna = (coluna + 1) & 0xf;
	}
}

void limpa_col_glcd(unsigned char hor) {
	unsigned char pag, lado = hor & 0x40;

	for (pag = 0; pag < 8; pag++) {
		conf_pag(pag, lado);
		conf_Y(hor & 0x3f, lado);
		esc_glcd(0, GLCD_DAT, lado);
	}
}

unsigned char escala_glcd(float valor, float lim_inf, float lim_sup) {
	float ajustado = VER_MAX * (valor - lim_inf) / (lim_sup - lim_inf);

	if (ajustado >= VER_MAX)
		return VER_MAX;
	else if (ajustado <= 0)
		return 0;

	return (unsigned char)(ajustado + 0.5f);
}

void ponto_glcd(unsigned char hor, unsigned char ver) {
	unsigned char lado = (hor & 0x40) ? GLCD_DIR : GLCD_ESQ;
	unsigned char bitv = 7 - (ver & 7);
	unsigned char pag  = 7 - (ver >> 3);

	conf_pag(pag, lado);
	conf_Y(hor & 0x3f, lado);
	esc_glcd(3u << bitv, GLCD_DAT, lado);
}
