#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int v[5];							// Declaração do vetor
	int i;								// Declaração da varíavel de controle
	
	for ( i = 0; i < 5; i++ ) {			// Declaração do 'For' para obtenção dos dados do usuário
		
		printf("Insira um dado: \n");
		scanf("%d", &v[i]);
		
	}

	printf("Dados inseridos: \n");		// Declaração do 'For' para demonstração dos dados inseridos pelo usuário
	
	for ( i = 0; i < 5; i++) {
		
		printf("%d ", v[i]);
		
	}

	return 0;
}
