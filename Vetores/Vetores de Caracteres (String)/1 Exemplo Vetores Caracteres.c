#include <stdio.h>
#include <stdlib.h>

int main() {

	char s[10];											// Declaração da variavel para armazenamento da string
	
	printf("Digite algo (scanf convencional): \n");		// Chamada da função 'Printf' para escrever na tela as instruções para o usuário
	scanf("%s", s);										// Chamada da função 'Scanf' para armazenar na variavel a resposta do usuário
	fflush(stdin);										// A função 'Fflush' é utilizada para limpar o buffer da máquina, para que não tenha lixo de
														// memória ou alguma tecla já digitada pelo usuário anteriormente sendo "inputada"
														// automaticamente quando o próximo 'Scanf' for chamado. Parecido com a função 'getchar()'.
	
	printf("Resultado: %s\n\n", s);						// Chamada da função 'Printf' para escrever na tela o texto inserido no programa pelo usuário.
	
	printf("Digite algo (scanf aprimorado): \n");
	scanf("%10[^\n]s", s);								// Com essa sintaxe de 'Scanf', você insere a quantidade máxima de caracteres que a função pode
														// ler, impossibilitando do programa ler mais ou armazenar mais informações do que deveria na
														// variável, podendo ocasionar um problema no futuro do código. Com a declaração "[^\n]" o
														// programa irá ignorar a tecla "Enter" como uma tecla de leitura e a lerá apenas como terminação
														// ou confirmação de resposta do usuário.
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);

	return 0;
}
