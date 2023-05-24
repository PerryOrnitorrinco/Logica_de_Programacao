#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float media;
	
	printf("-------------------------\n");
	printf("Situacao Escolar do Aluno\n");
	printf("-------------------------\n");
	
	printf("\nInsira a nota do aluno: ");
	scanf("%f", &media);
	
	if(media < 5.0){
		
		printf("\nAluno esta reprovado!");
		
	}
	
	if(media >= 5.0 && media < 7.0){
		
		printf("\nAluno esta de recuperacao!");
		
	}
	
	if(media >= 7.0){
		
		printf("\nAluno esta aprovado!");
		
	}
	
	return 0;

}
