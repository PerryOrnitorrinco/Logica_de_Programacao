#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nome[20];
    char rua[50];
    char bairro[20];
    char cidade[20];
    char endereco[80] = "";
    char separacao[2] = " ";

    printf("Ola, qual o seu nome?\n");
    scanf("%s[^\n]", nome);
    getchar();

    printf("Certo %s, e qual o seu endereco? Comecando pela rua.\n", nome);
    gets(rua);
    fflush(stdin);

   
    printf("E em qual bairro a %s esta localizada?\n", rua);
    scanf("%s[^\n]", bairro);
    fflush(stdin);


    printf("Bacana. E em qual cidade voce mora?\n");
    scanf("%s[^\n]", cidade);
    fflush(stdin);

    strcat(endereco, rua);
    strcat(endereco, separacao);
    strcat(endereco, bairro);
    strcat(endereco, separacao);
    strcat(endereco, cidade);
    
    printf("Entao, seu nome e %s e voce mora na %s.", nome, endereco);

    return 0;

}