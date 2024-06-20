#ifndef GLCD_H
#define GLCD_H

#define GLCD_HEIGHT 64
#define GLCD_WIDTH 128

unsigned char le_glcd(__bit cd, __bit cs);
void esc_glcd(unsigned char dado, __bit cd, __bit cs);
void conf_Y(unsigned  char y, __bit cs);
void conf_pag(unsigned  char pag, __bit cs);
void limpa_glcd(void);
void init_GLCD(void);
void limpa_col_glcd(unsigned char hor);
unsigned char escala_glcd(float valor, float lim_inf, float lim_sup);
void ponto_glcd(unsigned char hor, unsigned char ver);
void pontomed_glcd(unsigned char hor, unsigned char ver1, unsigned char ver2);

#endif  // GLCD_H
