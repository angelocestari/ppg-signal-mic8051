#include "defs.h"
#include "filtro.h"

#define BUFFER_SIZE 256

__xdata float buffer[BUFFER_SIZE] = {0};
unsigned char buffer_idx = 0;
float signal_sum = 0;

void guarda_buffer(unsigned int amostra) {
	signal_sum -= buffer[buffer_idx];
	signal_sum += amostra;
	buffer[buffer_idx] = amostra;
	buffer[buffer_idx] -= signal_sum / BUFFER_SIZE;
	buffer_idx = (buffer_idx + 1) % BUFFER_SIZE;
}

void limites_amostras(unsigned char n_prox, float *min, float *max) {
	unsigned char ini_idx = buffer_idx;
	unsigned char i = ini_idx;
	float amostra = buffer[i];

	*min = *max = amostra;

	do {
		i++;
		amostra = buffer[i];
		if (amostra < *min)
			*min = amostra;
		if (amostra > *max)
			*max = amostra;
	} while (i != (unsigned char)(ini_idx + n_prox));
}
