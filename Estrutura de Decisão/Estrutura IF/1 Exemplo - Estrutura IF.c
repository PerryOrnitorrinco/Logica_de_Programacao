#include <stdio.h>
#include <stdlib.h>

int main() {
	
	/* Operadores Relacionais são operadores que relacionam, comparam, uma coisa com outra, são eles:
	
		• Maior: >
		• Maior ou Igual: >=
		• Menor: <
		• Menor ou Igual: <=
		• Igual: == - São utilizados dois símbolos de Igual (=) para os operadores relacionais, pois apenas um símbolo de Igual é interpretado pela Linguagem C e, 
		  consequentemente pelo Compilador, como uma Atribuição de Valor.
		• Diferente: !=
	
	 */

	float m;
	
	printf("Insira a nota: ");
	scanf("%f", &m);
	
	if(m >=7.0) {
		
		printf("Aprovado(a)!\n"); 
		
	}
	
	system("pause");
	
	
	/* Operados Lógicos são capazes de realizar comparações mais complexas, com condições, através de diversos valores e/ou expressões. São eles:
	
		• Conjunção: Compara N valores e, somente se, todos os valores forem verdadeiros, a condição é verdadeira. É simbolizado por: &&
		• Disjunção: Compara N valores e, caso um dos valores for o verdadeiro, a condição é verdadeira. É simbolizado por: ||
		• Inversão: Compara um valor com True ou False e, somente se o valor for False, que a condição será verdadeira. É simbolizado por: !
		
	 */
	
	system("cls");
	
	float me;
	
	printf("Insira a nota: ");
	scanf("%f", &me);
	
	if(me >= 4.0 && me < 7.0){
		
		printf("Tem direito a exame!\n");
		
	}
	
	
	
	
	
	return 0;

}
