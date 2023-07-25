#include <stdio.h>
#include <stdlib.h>

int main() {

	float media[4];					// Declaração do Vetor "media", com 4 espaços, para armazenamento das seguintes notas: 2 Av, 1 Atividade e 1 Comportamento
	int i;							// Declaração da varíavel de controle
	
	for( i = 0; i < 4; i++ ) {		// Função 'For' utilizada para obtenção das notas do aluno
		
		printf("Insira a nota: ");
		scanf("%d", &media[i]);	
	
	}
	
	for( i = 0; i < 4; i++ ){
		
		printf("Notas inseridas: %.2f", media[i]);
		
	}

	return 0;
}
