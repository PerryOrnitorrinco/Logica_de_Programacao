#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int resp;
	
	printf("O Operador Logico NAO, simbolizado pelo '!' e utilizado para inversao de valores, sendo VERDADEIRO o resultado do "
	"Operador somente quando o dado inserido para comparacao no operador for FALSO, e vice-versa. ");
	
	/* Em Linguagem C, o 'printf' não reconhece, automaticamente, uma quebra de linha em sua escrita. Caso o texto for grande
	demais para caber em apenas uma linha e você queira deixar tudo organizado, formatado, não basta apenas pular uma linha e
	continuar escrevendo, pois o 'printf' não reconhecerá a linha debaixo como uma continuação da linha de cima, mesmo estando
	dentro dos parênteses. Para solucionar esse problema, cada linha, ainda dentro dos parênteses, deverá ser aberta e fechada
	com "aspas duplas", sendo lida e organizada de maneira automatica pelo compilador na hora da execução do programa. */
	
	printf("\n\nAnalise a frase a seguir:\n\n 5 e maior que tres.\n\n A frase esta correta? (0 para Falso/ 1 para Verdadeiro) ");
	scanf("%d", &resp);
	
	resp = !resp;
	
	printf("Sua resposta e: %d", resp);
	
	return 0;

}
