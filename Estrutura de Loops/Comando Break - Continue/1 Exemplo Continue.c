#include <stdio.h>
#include <stdlib.h>

int main() {

	int i;
	
	for ( i = 1; i <= 10; i++) {	// Declaração de um 'For' para demonstração do comando 'Continue'
		
		if ( i == 5) {				// Declaração de um 'If' para demonstrar o comando 'Continue', que, caso a condição do bloco de comando em que está
									// inserido for verdadeiro, o comando irá pular aquela iteração (repetição) e irá para a próxima iteração.
									// Ao contrário do comando 'Break', que finaliza todo o bloco de comandos, o 'Continue' apenas pula a iteração
									// necessária e continue o bloco de comandos.
			
			continue; 
			
		}
		
		printf("%d ", i);			// Declaração de um 'Printf' para escrever na tela a contagem de 1 à 10
		
	}

	return 0;
}
