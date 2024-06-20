#ifndef UART0_H
#define UART0_H

extern volatile __bit uart0_flag;
extern volatile unsigned char uart0_data;

void enable_uart0(void);
void disable_uart0(void);
void envia_uart0(unsigned char dado);

#endif  // UART0_H
