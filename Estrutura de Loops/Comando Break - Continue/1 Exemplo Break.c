#include <stdio.h>
#include <stdlib.h>

int main() {

	int i;
	
	for ( i = 1; i <= 10; i++) {
		
		printf("%d ", i);	// Declaração de um 'For' e um 'Printf' normal, que contará de 1 à 10
		
		if ( i == 5) {		// Declaração de um 'If' para demonstrar o comando 'Break', que finalizará o bloco de comando, dando continuidade ao código
			
			break;			// Comando 'Break' é utilizado quando se quer finalizar toda a cadeia do bloco de repetição, saindo do comando em que está
							// inserido e dando continuidade ao programa.
			
		}
		
	}	

	return 0;
}
