#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int mesa;											/* Declaração de Varíaveis */
	int escolhaEntrada, escolhaPrincipal, escolhaBebida;
	char resp, menu, categoria, outraCat;

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
	
	printf("Voce abre o Menu e ve as seguintes categorias:");
	
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
			
			printf("1 - Iscas de Tilapia\n");
			printf("2 - Bolinhas de Queijo\n");
			printf("3 - Batata Frita com Cheddar e Bacon\n");
			printf("4 - Mandioca Frita\n");
			printf("5 - Calabresa Acebolada\n");
			
			printf("\n\n");
			
			printf("Voce gostaria de pedir algum dos pratos? Se sim, digite o numero do prato; se nao, digite 0. ");
			scanf("%d", &escolhaEntrada);
			
			printf("\n");
			
			if ( escolhaEntrada == 0) {
				
				printf("Tudo bem. Gostaria de olhar uma outra categoria? (S / N) ");
				scanf(" %c", &outraCat);
				
				if ( outraCat == 'S') {
					
					printf("\n");
				
					goto categorias;
				
			}
			
			else {
				
				printf("\n");
				
				printf("Ok, volto depois.");
				
				return 0;
				
			}
				
			}			
			
		break;
		
		case 'P':
			
			printf("No Menu Principal voce tem as seguintes opcoes:\n\n");
			
			printf("1 - Strogonoff de Carne/Frango\n");
			printf("2 - Picanha na Chapa\n");
			printf("3 - Salada Caesar\n");
			printf("4 - Macarrao Carbonara\n");
			printf("5 - Sushi\n");
			
			printf("\n\n");
			
			printf("Voce gostaria de pedir algum dos pratos? Se sim, digite o numero do prato; se nao, digite 0. ");
			scanf("%d", &escolhaPrincipal);
			
			printf("\n");
			
			if ( escolhaEntrada == 0) {
				
				printf("Tudo bem. Gostaria de olhar uma outra categoria? (S / N) ");
				scanf(" %c", &outraCat);
				
				if ( outraCat == 'S') {
					
					printf("\n");
				
					goto categorias;
				
			}
			
			else {
				
				printf("\n");
				
				printf("Ok, volto depois.");
				
				return 0;
				
			}
				
			}
			
		break;
		
		case 'B':
			
			printf("No Menu das Bebidas voce tem as seguintes opcoes:\n\n");
			
			printf("1 - Refrigerante de Lata\n");
			printf("2 - Suco de Polpa\n");
			printf("3 - Suco de Caixinha\n");
			printf("4 - Soda Italiana\n");
			printf("5 - Agua Mineral\n");
			
			printf("\n\n");
			
			printf("Voce gostaria de pedir alguma das bebidas? Se sim, digite o numero da bebida; se nao, digite 0. ");
			scanf("%d", &escolhaBebida);
			
			printf("\n");
			
			if ( escolhaEntrada == 0) {
				
				printf("Tudo bem. Gostaria de olhar uma outra categoria? (S / N) ");
				scanf(" %c", &outraCat);
				
				if ( outraCat == 'S') {
					
					printf("\n");
				
					goto categorias;
				
			}
			
			else {
				
				printf("\n");
				
				printf("Ok, volto depois.");
				
				return 0;
				
			}
				
			}
			
		break;
		
	}
	
	printf("Entao, para confirmar");
		
	system("pause");
	return 0;

}