#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (){
	
	int /* formato em que a variavel ira receber e armazenar os dados. Ex.: int, float, char */ idade /* nome da
	variavel, sendo definida pelo programador */ = 0; /* valor atribuido inicialmente à variavel, seja ele
	númerico ou caracter */
	
	printf("Valor inicial da idade: %d.\n", idade);
	
	printf("Digite uma idade: ");
	scanf("%d", &idade);
	
	printf("Idade informada foi: %d.\n", idade);
	
	system("pause");
	
	/* Acima foi realizado um exemplo, pelo curso, para demonstração do scanf. */
	
	
	/* Abaixo será realizado, pelo programador, exercícios, para fixação do conceito */
	
	system("cls");
	
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
	
	system("pause");
	system("cls");
	
	getchar(); /* Linha de código necessária adicionada, por causa do system("pause") acima, pois quando o usuário aperta a tecla Enter, para avançar
				  sobre o mesmo, o scanf do printf do nome estava inserindo ele como um dado, ou seja, como se fosse o nome que seria digitado.
				  Utilizando getchar(); você elimina o dado da tecla Enter do buffer do sistema e o próximo scanf lerá o próximo dado, de fato escrito
				  através do teclado. */
	
	char nome[25]; /* Para se ler mais de um caractere, é necessário declarar um array, utilizando os colchetes: [x], sendo x o número máximo de
					  caracteres que serão lidos por esse array. */
	
	printf("-----------------\n");
	printf("Ficha de Cadastro\n");
	printf("-----------------\n\n");
	
	printf("Qual seu nome?\n");
	scanf("%[^\n]", nome); /* Por padrão, o scanf lê somente uma sequência ininterrupta de caracteres sendo que, ao ser digitado o espaço, para
							  separar o nome dos sobrenomes o scanf para de ler, e retorna somente a primeira sequência de caracteres digitados. Para
							  resolver esse problema, você pode utilizar o formato: [^\n], para que o scanf leia todas as entradas, até que haja uma
							  quebra de linha, ou seja, a entrada da tecla Enter */
	
	printf("Bem Vindo, %s, agora faremos sua ficha de cadastro.", nome);
	
	
	
	return 0;
}