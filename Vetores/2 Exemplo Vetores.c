#include <stdio.h>
#include <stdlib.h>

int main() {

	int v[5] = {10, 20, 30, 40, 50};	// Declaração do vetor 'v', com 5 posições e declaração dos valores que nele serão armazenados.
	int i;								// Declaração da varíavel 'i' para controle das iterações do comando de repetição 'For'.
	float s = 0;						// Declaração da varíavel 's' para armazenar o resultado da soma dos números do vetor.
	
	for ( i = 0; i < 5; i++ ) {			// Comando 'For' iniciado com a varíavel 'i' com valor 0 e condição de ser menor que a quantidade de posições
										// do vetor, pois como o vetor sempre começará na posição 0, para esse tipo de declaração, a fórmula fica n-1.
										
		s += v[i];						// Comando em que a varíavel 's' recebe o valor dela mesma MAIS o valor da posição de 'i' no vetor. Por exemplo:
										// a varíavel 'i' começa as iterações com valor 0, então a soma ficará: s (que foi declarada como 0 no começo do
										// programa) = s (0) + o valor da posição, no vetor, que a varíavel 'i' está valendo: Posição 0; Valor 10.
										// Então, nesse caso, para a primeira Iteração do 'For', a conta seria: s = 0 + 10.
		
	}
	
	printf("Resultado: %.2f\n", s/5);	// 'Printf' para exibir na tela o resultado da média, com apenas duas casas decimais.

	return 0;
}
