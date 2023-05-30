#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int mesa;
	char resp, menu, categoria;

	printf("----------------------------------\n");
	printf("Bem Vindo ao Restaurante do Gordao\n");
	printf("----------------------------------\n");
	
	printf("\nMesa para quantas pessoas? (1 a 4) ");
	scanf("%d", &mesa);
	
	printf("\n");
	
	getchar();
	
	switch(mesa) {
		
		case 1:
			
			printf("Poderia ser o balcao, ou e realmente necessario uma mesa? (B / M) ");
			scanf("%c", &resp);
			
			printf("\n");
			
			if ( resp == 'B' ){
				
				printf("Ok, voce sera direcionado ao balcao!");
			
			}
				
			else {
				
				printf("Tudo bem entao, voce sera direcionado para uma mesa!");
				
			}
			
		break;
		
		case 2:
			
			printf("Tudo bem, voces serao direcionados para uma mesa com dois lugares!");
			
		break;
		
		case 3:
			
			printf("Tudo bem, voces serao direcionados para uma mesa com tres lugares!");
			
		break;
		
		case 4:
			
			printf("Tudo bem, voces serao direcionados para uma mesa com quatro lugares!");
			
		break;
		
		default:
			
			printf("Resposta invalida!");
			
		return 0;
		
	}
	
	printf("\n");
	
	if ( mesa != 1) {
		
		printf("Voces querem o Menu agora ou depois? (A / D) ");
		scanf(" %c", &menu);
	
		printf("\n");
		
	}
	
	else { 	
	
		getchar();
	
		printf("Voce quer o Menu agora ou depois? (A / D) ");
		scanf(" %c", &menu);
	
		printf("\n");
		
	}
	
	if ( menu != 'A' && menu != 'D') {
		
		printf("Resposta Invalida!");
		
		return 0;
		
	}
	
	getchar();
	
	if ( mesa == 1 && menu == 'A') {
				
		printf("Aqui esta seu Menu.");
				
	} else if ( mesa == 1 && menu == 'D' ) {
		
		printf("Ok, trarei seu Menu depois.");
		
		return 0;
		
	}
	
	if ( mesa != 1 && menu == 'A') {
				
		printf("Aqui estao os seus Menus.");
				
	} else if ( mesa != 1 && menu == 'D' ) {
		
		printf("Ok, trarei os Menus mais tarde.");
		
		return 0;
		
	}
	
	printf("\n\n\n");
	
	printf("Voce abre o Menu e ve as seguintes categorias:\n\n");
	
	categorias:
		
		printf("Entrada.\n");
		printf("Principal.\n");
		printf("Bebida.\n");
	
	printf("\n");
		
	printf("Qual categoria gostaria de olhar? (E / P / B) ");
	scanf(" %c", &categoria);
	
	if ( categoria != 'E' && categoria != 'P' && categoria != 'B') {
		
		printf("\n");
		printf("Resposta invalida!");
		
		return 0;
		
	}
	
	printf("\n");
	
	switch (categoria) {
		
		case 'E':
			
			printf("No Menu das Entradas voce tem as seguintes opcoes:\n\n");
			
			printf("Iscas de Tilapia\n");
			printf("Bolinhas de Queijo\n");
			printf("Batata Frita com Cheddar e Bacon\n");
			printf("Mandioca Frita\n");
			printf("Calabresa Acebolada\n");
			
		break;
		
		case 'P':
			
			printf("No Menu Principal voce tem as seguintes opcoes:\n\n");
			
			printf("Strogonoff de Carne/Frango\n");
			printf("Picanha na Chapa\n");
			printf("Salada Caesar\n");
			printf("Macarrao Carbonara\n");
			printf("Sushi\n");
			
		break;
		
		case 'B':
			
			printf("No Menu das Bebidas voce tem as seguintes opcoes:\n\n");
			
			printf("Refrigerante de Lata\n");
			printf("Suco de Polpa\n");
			printf("Suco de Caixinha\n");
			printf("Soda Italiana\n");
			printf("Agua Mineral\n");
			
		break;
		
	}
		
	system("pause");
	return 0;

}