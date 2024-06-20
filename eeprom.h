#ifndef EEPROM_H
#define EEPROM_H

#define EEPROM_SIZE 128

extern unsigned char eeprom_idx;

int le_eeprom(unsigned char endereco);
int esc_eeprom(unsigned char endereco, unsigned char dado);
void guarda_eeprom(unsigned int amostra);

#endif  // EEPROM_H
