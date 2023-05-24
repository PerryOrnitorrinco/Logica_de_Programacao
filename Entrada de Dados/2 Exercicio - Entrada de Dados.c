#include <stdio.h>
#include <stdlib.h>

int main() {

	char nome[25]; /* Para se ler mais de um caractere, é necessário declarar um array, utilizando os colchetes: [x], sendo x o número máximo de
					  caracteres que serão lidos por esse array. */
	int dia, mes, ano;
	int filho;
	char trab[25], escola[25];
	
	printf("-----------------\n");
	printf("Ficha de Cadastro\n");
	printf("-----------------\n\n");
	
	printf("Qual seu nome?\n");
	scanf("%[^\n]", &nome); /* Por padrão, o scanf lê somente uma sequência ininterrupta de caracteres sendo que, ao ser digitado o espaço, para
							  separar o nome dos sobrenomes o scanf para de ler, e retorna somente a primeira sequência de caracteres digitados. Para
							  resolver esse problema, você pode utilizar o formato: [^\n], para que o scanf leia todas as entradas, até que haja uma
							  quebra de linha, ou seja, a entrada da tecla Enter */
							  
	getchar();
	
	printf("\n");
	printf("Bem Vindo, %s, agora faremos sua ficha de cadastro.\n\n", nome);
	
	printf("Quando voce nasceu? (dd/mm/aaaa): ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	
	getchar();
	
	printf("\n");
	printf("Com o que voce trabalha?\n");
	scanf("%[^\n]", &trab);
	
	printf("\n");
	printf("Voce tem quantos filhos? ");
	scanf("%d", &filho);
	
	getchar();
	
	printf("\n");
	printf("Qual seu grau de escolaridade?\n");
	scanf("%[^\n]", &escola);
	
	printf("\nEntao voce, %s, nasceu em %.2d/%.2d/%.4d, tem %d filho(s), trabalha com %s, e esta %s.\n\n", nome, dia, mes, ano, filho, trab,escola);
	printf("Parabens, sua ficha de cadastro esta pronta!");
	
	return 0;

}
