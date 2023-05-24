#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char resp, comer;
	int salg;

	printf("Voce esta com fome e voce ve uma padaria. Voce entra? (S/N) ");
	scanf(" %c", &resp);
	printf("\n");
	
	if ( resp == 'N'){
		
		printf("Voce continua com fome.");
		exit(0);
		
	} else{
		
		if ( resp != 'S'){
			
			printf("Resposta Invalida.");
			exit(0);
			
		}
		
	}
	
	printf("Ao entrar na padaria, voce vai ao balcao e ve duas opcoes: 1 - Enroladinho de queijo ou 2 - Enroladinho de salsicha."
			" Qual voce escolhe? (1/2) ");
	scanf("%d", &salg);
	printf("\n");
	
	if ( salg == 1){
		
		printf("Voce decidiu pegar o Enroladinho de Queijo.");
		printf("\n");
		
	} else{
		
		if ( salg == 2){
			
			printf("Voce decidiu pegar o Enroladinho de Salsicha.");
			printf("\n");
			
		} else{
			
			printf("Resposta Invalida!");
			printf("\n");
			
		}
		
	}
	
	printf("\n");
	printf("Voce se Senta para comer na padaria ou vai Embora e come no caminho? (S/E) ");
	scanf(" %c", &comer);
	printf("\n");
	
	if ( comer == 'S'){
		
		printf("Voce se senta na padaria e aproveita seu lanche.");
		printf("\n");
		
	} else{
		
		if ( comer == 'E'){
			
			printf("Voce come seu lanche no caminho.");
			printf("\n");
			
		} else{
			
			printf("Resposta Invalida!");
			printf("\n");
			
		}
		
	}
		
	return 0;

}
