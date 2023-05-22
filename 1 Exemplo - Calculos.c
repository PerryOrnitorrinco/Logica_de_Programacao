#include <stdio.h>
#include <stdlib.h>

int main() {
	
	/* Operadores Matemáticos:

		Soma: +
		Subtração: -
		Multiplicação: *
		Divisão: /
		Resto de Divisão inteira: %
	
		Lembrando que existe uma ordem à ser seguida para as operações matemáticas
	
	*/

	int A, B, soma, subtr, mult, divis;
	
	printf("Digite o 1 valor: \n");
	scanf("%d", &A);
	
	printf("Digite o 2 valor: \n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("Resultados: \n");
	printf("Soma: %d. \n", soma);
	printf("Subtracao: %d. \n", subtr);
	printf("Multiplicacao: %d. \n", mult);
	printf("Divisao: %d. \n", divis);
	
	/* Operações de Atribuição Aritmética

		Incremento em 1 unidade: ++
		Decremento em 1 unidade: --
		Incremento genérico: +=
		Decremento genérico: -=
		Atribuição com multiplicação: *=
		Atribuição com divisão: /= 

	 */
	
	int dado = 10;
	
	printf("\n\nDado antes do incremento: %d. \n", dado);
	
	dado++;
	printf("Dado depois do incremento: %d. \n", dado);
	
	dado--;
	printf("Dado depois do decremento: %d. \n", dado);
	
	dado += 3;
	printf("Dado depois do incremento em 3 unidades: %d. \n", dado);
	
	dado -= 2;
	printf("Dado depois do decremento em 2 unidades: %d. \n", dado);
	
	dado *= 10;
	printf("Dado depois de multiplicar por 10: %d. \n", dado);
	
	dado /= 10;
	printf("Dado depois de dividir por 10: %d. \n", dado);
	
	return 0;

}
