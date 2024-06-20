#ifndef ADC_H
#define ADC_H

#define ADC0_GAIN_1  0
#define ADC0_GAIN_2  1
#define ADC0_GAIN_4  2
#define ADC0_GAIN_8  3
#define ADC0_GAIN_16 4
#define ADC0_GAIN_05 6
#define ADC0_AIN0   0
#define ADC0_AIN1   1
#define ADC0_AIN2   2
#define ADC0_AIN3   3
#define ADC0_HVDA   4
#define ADC0_AGND   5
#define ADC0_P3EVEN 6
#define ADC0_P3ODD  7
#define ADC0_TEMP   8
#define ADC0_DEPTH 4096
#define ADC0_VREF 2.43f

extern volatile unsigned int nova_amostra;
extern volatile __bit amostra_disp;

void config_adc0(unsigned char canal, unsigned char ganho);
unsigned int le_adc0(void);

#endif  // ADC_H
