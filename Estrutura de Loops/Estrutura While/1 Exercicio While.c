#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int cont;
	int i = 1;

	printf("Voce gostaria de contar ate que numero inteiro e real? ");
	scanf("%d", &cont); 
	
	printf("\n");
	
	while ( i <= cont ) {
		
		printf("%d ", i);
		i++;
		
	}

	return 0;
}
