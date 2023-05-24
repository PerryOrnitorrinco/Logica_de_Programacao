#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* Essa biblioteca é necessária ser incluída pois, dentre várias outras funções, ela tem a função 'strcmp', que é utilizada para
					   para comparar duas strings e retornar determinados valores dependendo do resultado. */

int main() {
	
	char resp[15];

	printf("--------------------\n");
	printf("Comparador de Coisas\n");
	printf("--------------------\n\n");
	
	printf("Qual dos dois e mais pesado: 1kg de Algodao ou 1kg de Ferro? (Algodao/Ferro)\n");
	scanf("%s", &resp);
	
	if(strcmp(resp, "Algodao") == 0 || strcmp(resp, "Ferro") == 0) /* Essa função é utilizada para comparar duas strings, que retorna valores pré
																	  definidos diante do resultado apresentado pela função, mas a mais importante é
																	  que, quando as strings são iguais, a função retorna o valor de 0. Esse resultado
																	  pode ser utilizado em Operações Lógicas quando se quer comparar uma string com a
																	  resposta que o usuário inseriu no sistema, por exemplo. Sua sintaxe é simples:
																	  'int strcmp(string 1, string 2).' */
	
	{
		
		printf("\nVoce errou! Os dois tem o mesmo peso.");
		
	}
	
	if(strcmp(resp, "Nenhum") == 0) {
		
		printf("\nVoce acertou!");
		
	}
	
	return 0;

}
