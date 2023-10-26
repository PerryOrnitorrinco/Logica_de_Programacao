#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nome[20];
    char rua[50];
    char bairro[20];
    char cidade[20];
    char endereco[80];

    printf("Ola, qual o seu nome?\n");
    fgets(nome, 20, stdin);
    fflush(stdin);

    printf("Certo %s, e qual o seu endereco? Comecando pela rua.\n", nome);
    fgets(rua, 50, stdin);
    getchar();

   
    printf("E em qual bairro a %s esta localizada?\n", rua);
    fgets(bairro, 20, stdin);
    fflush(stdin);


    printf("Bacana. E em qual cidade voce mora?\n");
    fgets(cidade, 20, stdin);
    fflush(stdin);

    strcat(endereco, rua);
    strcat(endereco, bairro);
    strcat(endereco, cidade);
    
    printf("Entao, seu nome e %s e voce mora na %s.", nome, rua);

    return 0;

}