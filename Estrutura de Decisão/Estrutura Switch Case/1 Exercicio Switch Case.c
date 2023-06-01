#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int mesa;						/* Delcaração de Varíaveis */
	char resp, menu, categoria;

	printf("----------------------------------\n");		/* Cabeçalho a ser mostrado no início do programa */
	printf("Bem Vindo ao Restaurante do Gordao\n");
	printf("----------------------------------\n");
	
	printf("\nMesa para quantas pessoas? (1 a 4) ");	/* Inicio do programa, efetuando a primeira pergunta para o usuário. */
	scanf("%d", &mesa);
	
	printf("\n");
	
	getchar();											/* Função utilizada para limpar o buffer da tecla 'Enter' para evitar que a mesma seja lida
														no proximo 'scanf'. */
	
	switch(mesa) {										/* Chamada da função 'Switch' para verificar as respostas dadas pelo usuário. */
		
		case 1:											/* Caso a resposta do usuário seja apenas 1 pessoa, o programa irá perguntar se o usuário
														pode ser direcionado ao balcão ou se realmente há a necessidade de uma mesa. */
			
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
	
	if ( mesa != 1) {									/* Função 'IF' chamada para verificar qual a resposta do usuário em relação à quantas */
														/* pessoas irão se sentar à mesa, para uma proxima pergunta mais "personalizada". Caso */
														/* seja apenas uma pessoa, a pergunta será feita no singular; caso seja mais de uma pessoa,*/
														/* a pergunta sera feita no plural. */
		
		printf("Voces querem o Menu agora ou depois? (A / D) ");
		scanf(" %c", &menu);
	
		printf("\n");
		
	}
	
	else { 	
	
		printf("Voce quer o Menu agora ou depois? (A / D) ");
		scanf(" %c", &menu);
	
		printf("\n");
		
	}
	
	if ( menu != 'A' && menu != 'D') {					/* Função 'IF' chamada para que, caso o usuário digite algo que não seja as respostas */
														/* "corretas"" o programa diga que a resposta é invalida e se encerre. */
														
		printf("Resposta Invalida!");
		
		return 0;
		
	}
	
	getchar();
	
	if ( mesa == 1 && menu == 'A') {					/* Duas funções 'IF' chamadas para verificar duas coisas: o número de pessoas da mesa E a */
														/* resposta à pergunta referente ao Menu. Novamente, para responder de uma maneira mais */
														/* personalizada. */
				
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
	
	categorias:											/* Label que eu não sei ainda se funciona, colocada aqui pra tentar utilizar o 'goto' para */
														/* quando o usuário escolher um produto, caso queira, voltar pra escolher outro. */
		
		printf("Entrada.\n");
		printf("Principal.\n");
		printf("Bebida.\n");
	
	printf("\n");
		
	printf("Qual categoria gostaria de olhar? (E / P / B) ");
	scanf(" %c", &categoria);
	
	if ( categoria != 'E' && categoria != 'P' && categoria != 'B') {	/* Função 'IF' utilizada para verificar a resposta do usuário e, caso não */
														/* não seja as respostas "corretas", será dito que a resposta é inválida e o programa será */
														/* encerrado. */
		
		printf("\n");
		printf("Resposta invalida!");
		
		return 0;
		
	}
	
	printf("\n");
	
	switch (categoria) {								/* Função 'Switch' utilizada para verificar a resposta do usuário e mostrar as opções da */
														/* categoria correspondente à escolha do mesmo. */
		
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