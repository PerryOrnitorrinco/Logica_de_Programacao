#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[20];
	char sobrenome[20];

	printf("Como em Linguagem C, voce nao consegue atribuir valores a uma string no meio do codigo utilizando o '=', caso aja a necessidade para tal, ");	
	printf("e necesario fazer isso atraves de uma funcao, um codigo, que e 'strcpy( string onde sera copiado , string que sera copiada )'.\n\n");
		
	printf("Por exemplo, escreva somente seu primeiro nome: ");
	fgets(nome, 20, stdin);
	fflush(stdin);
	
	printf("Por exemplo, escreva seu primeiro sobrenome: ");
	fgets(sobrenome, 20, stdin);
	fflush(stdin);
	
	printf("\nAgora, utilizando a funcao 'Strcpy', vamos copiar o conteudo do seu nome, para o seu sobrenome, ficando:\n");
	
	strcpy(sobrenome, nome);
	
	printf("Seu nome: %s", nome);
	printf("Seu sobrenome: %s", sobrenome);s

	return 0;
}
