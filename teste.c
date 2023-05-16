#include <stdio.h>
#include <stdlib.h>

int main() {

	char nome[25];
	
	printf("-----------------\n");
	printf("Ficha de Cadastro\n");
	printf("-----------------\n\n");
	
	printf("Qual seu nome?\n");
	fgets(nome, 25, stdin);
	
	printf("Seu nome e: %s", nome);
	
	return 0;
}