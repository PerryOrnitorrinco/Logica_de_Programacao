#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int resp;

	printf("---------\n");
	printf("Pegadinha\n");
	printf("---------\n\n");
	
	pegadinha:
	
	printf("O que e, o que e: Um indio cumprimentou um pedaco de madeira. Que horas sao? ");	/* A pergunta para a pegadinha */
	scanf("%d", &resp);
	
	do {																						/* Um bloco Do While, que, enquanto a resposta do */
																								/* usuário não for '8', que é a resposta certa, */
																								/* ficará se repetindo. */
	
		if ( resp != 8 ) {																		/* Chamada de Função IF para verificar se o usuário */
																								/* digitou a resposta correta ou não. Utilizada */
																								/* também para que, caso o usuário digite uma letra */
																								/* o programa não entre em loop infinito. */
			
			printf("\nVoce errou. Tente novamente.\n\n");
			
			getchar();																			/* Função utilizada para limpar o buffer */
			goto pegadinha;																		/* Função para ir para a label antes da pergunta */
			
		}
		
		else {
			
			printf("\nVoce acertou!");
			
			break;																				/* Caso o usuário acerte, a função 'break' é chamada */
																								/* para interromper que o loop se torne infinito. */
			
		}
		
	}	while ( resp != 8 );
           
	return 0;
}
