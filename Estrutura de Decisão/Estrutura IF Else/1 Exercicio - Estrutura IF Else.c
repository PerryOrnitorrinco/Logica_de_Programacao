#include <stdio.h>
#include <stdlib.h>

int main() {

	float media;
	
	printf("-------------------------\n");
	printf("Situacao Escolar do Aluno\n");
	printf("-------------------------\n");
	
	printf("\nInsira a nota do aluno: ");
	scanf("%f", &media);
	
	if( media < 7){
		
		if( media < 5){
			
			printf("\nAluno esta Reprovado!");
			
		} else{
			
			printf("\nAluno esta em Recuperacao!");
			
		}
		
	} else{
		
		printf("\nAluno esta Aprovado!");
		
	}

	return 0;

}
