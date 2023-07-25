#include <stdio.h>
#include <stdlib.h>

int main() {

	char s[10];										// Declaração de variavel para alocação da string
	
	printf("Digite algo (leitura pelo gets):\n");	// Chamada de função 'Printf' para escrever na tela instruções ao usuário
	gets(s);										// Chamada da função 'gets' com a variavel em que a string será armazenada.
	fflush(stdin);									// Chamada da função 'flush' para limpeza do buffer não lido pela função.
	
	puts("\nResultado:");							// Chamada da função 'puts' para escrever na tela o resultado digitado pelo usuário
	puts(s);										// Chamada da função 'puts' com a variavel que está armazenando a string que será exibida.
	puts("");										
	
	printf("Digite algo (leitura pelo fgets):\n");
	fgets(s, 10, stdin);							// Chamada da função 'fgets' para armazenamento da string digitada pelo usuário. A principal
													// diferença entre a função 'gets' e a função 'fgets' é a sintaxe. Enquanto na função 'gets' apenas
													// declaramos qual a variavel que irá receber a string do usuário, sem controle de quantos caracteres
													// serão lidos e armazenados pela função, podendo ocasionar diversos erros e execuções incorretas
													// do programa; na função 'fgets' temos controle da quantidade de caracteres lidos e armazenados
													// pela função e até mesmo, em caso de necessidade, de qual 'input' essa leitura ocorrerá.
													
	fflush(stdin);									// Chamada da função 'flush' para limpeza do buffer não lido pela função.
	
	puts("Resultado:");
	puts(s);

	return 0;
}
