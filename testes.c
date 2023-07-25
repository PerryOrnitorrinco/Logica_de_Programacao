#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    char resposta;

    printf("Desejá é continúar? (S/N) ");
    scanf(" %c", &resposta);

    if (resposta == 'S' || resposta == 's') {
        printf("Continuando o programa...\n");
        // Código para continuar o programa
    } else {
        printf("Encerrando o programa...\n");
        exit(0);  // Encerra o programa
    }

    // Resto do código

    return 0;
}