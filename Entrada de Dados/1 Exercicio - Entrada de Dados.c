#include <stdio.h>
#include <stdlib.h>

int main() {

	int Idade = 0;
	int anoNasc = 0;
	int anoAtual = 0;
	
	printf("--------------------\n");
	printf("Calculadora de Idade\n");
	printf("--------------------\n\n");
	
	printf("Digite o seu ano de nascimento: ");
	scanf("%d", &anoNasc);
	printf("\n");
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	printf("\n");
	
	Idade = (anoAtual - anoNasc);
	
	printf("Sua idade e: %d.\n", Idade);
	
	return 0;

}
