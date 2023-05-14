#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (){
	
	int /* formato em que a variavel ira receber e armazenar os dados. Ex.: int, float, char */ idade /* nome da
	variavel, sendo definida pelo programador */ = 0; /* valor atribuido inicialmente à variavel, seja ele
	númerico ou caracter */
	
	printf("Valor inicial da indade: %d.\n", idade);
	
	printf("Digite uma idade: ");
	scanf("%d", &idade);
	
	printf("Idade informada foi: %d.\n", idade);
	
	return 0;
}