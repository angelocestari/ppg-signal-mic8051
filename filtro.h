#ifndef FILTRO_H
#define FILTRO_H

// Remove "baseline wander"
void guarda_buffer(unsigned int amostra);
void limites_amostras(unsigned char n_prox, float *min, float *max);

#endif  // FILTRO_H
