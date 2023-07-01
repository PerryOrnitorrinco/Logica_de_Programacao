#include <stdio.h>
#include <stdlib.h>

int main() {

	int v[5];										// Declaração do vetor 'v', com 5 posições.
	
	float m;										// Declaração da variável 'm', para casas decimais.
	
	v[0] = 50;										// Declaração de valores para as devidas posições do vetor. Lembrando que o vetor sempre começa
	v[1] = 40;										// na posição 0.
	v[2] = 30;
	v[3] = 20;
	v[4] = 10;
	
	m = ( v[0] + v[1] + v[2] + v[3] + v[4] ) / 5;	// Cálculo da média dos valores do vetor, escrito de forma manual.
	
	printf("Resultado: %.2f\n", m);					// 'Printf' para exibir na tela o resultado da média, com duas casas decimais.

	return 0;
}
