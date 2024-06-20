#include "defs.h"
#include "eeprom.h"
#include "util.h"

#define EEPROM_ADDR 0x50
#define READ 1
#define WRITE 0

unsigned char eeprom_idx = 0;

void send_start(__bit first) {
	STA = first;
	SI = 0;
	reset_wdt();
	while (SI == 0) {}
}

void send_stop(void) {
	STO = 1;
	SI = 0;
	reset_wdt();
	while (STO == 1) {}
}

unsigned char esc_byte_cntr(unsigned char slave_addr, __bit RW) {
	// Gerar START
	send_start(1);
	if (SMB0STA != 0x08 && SMB0STA != 0x10)
		return SMB0STA;

	// Transmite BYTE
	SMB0DAT = (slave_addr << 1) | RW;

	send_start(0);

	// Verifica status
	if (RW == READ && SMB0STA != 0x40 || RW == WRITE && SMB0STA != 0x18) {
		return SMB0STA;
	}

	return 0;
}

unsigned char esc_byte_dado(unsigned char dado) {
	SMB0DAT = dado;
	SI = 0;
	reset_wdt();
	while (SI == 0) {}

	return (SMB0STA != 0x28) ? SMB0STA : 0;
}

int le_eeprom(unsigned char endereco) {
	int dado;
	unsigned char status;

	status = esc_byte_cntr(EEPROM_ADDR, WRITE);
	if (status != 0) return -(int)status;
	status = esc_byte_dado(endereco);
	if (status != 0) return -(int)status;
	status = esc_byte_cntr(EEPROM_ADDR, READ);
	if (status != 0) return -(int)status;

	AA = 0;
	SI = 0;
	reset_wdt();
	while (SI == 0) {} // Aguarda receber byte da EEPROM

	if (SMB0STA != 0x58) {
		return -(int)SMB0STA;
	}

	dado = SMB0DAT;
	send_stop();

	return dado;
}

int esc_eeprom(unsigned char endereco, unsigned char dado) {
	unsigned char status;

	status = esc_byte_cntr(EEPROM_ADDR, WRITE);
	if (status != 0) return -(int)status;

	status = esc_byte_dado(endereco);
	if (status != 0) return -(int)status;

	status = esc_byte_dado(dado);
	if (status != 0) return -(int)status;

	send_stop();

	reset_wdt();
	do {  // Ack polling
		status = esc_byte_cntr(EEPROM_ADDR, WRITE);
	} while (status == 0x20);

	return -(int)status;
}

void guarda_eeprom(unsigned int amostra) {
	esc_eeprom(eeprom_idx, amostra >> 4);  // Guarda 8 bits mais significativos
	eeprom_idx = (eeprom_idx + 1) % EEPROM_SIZE;
}

void ISR_TC4(void) __interrupt INTERRUPT_TIMER4 {
	SMB0CN &= ~0x40;  // Desabilita SMBus
	SMB0CN |= 0x40;  // Habilita SMBus
	TF4 = 0;
}

/*void ISR_TC4(void) __interrupt INTERRUPT_TIMER4 {
	SFRPAGE = TMR4_PAGE;
	TF4 = 0;
	SFRPAGE = LEGACY_PAGE;
}*/