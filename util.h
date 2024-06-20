#ifndef UTIL_H
#define UTIL_H

#define NOP2() NOP();NOP()
#define NOP3() NOP2();NOP()
#define NOP4() NOP2();NOP2()
#define NOP8() NOP4();NOP4()
#define NOP12() NOP8();NOP4()
#define NOP16() NOP8();NOP8()

extern volatile unsigned int tempo_us;

void reset_wdt(void);
void config_tc0(void);
void delay_ms(unsigned int t);
void delay_us(unsigned int t);

#endif  // UTIL_H
