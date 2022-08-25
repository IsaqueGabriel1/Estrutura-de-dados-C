#include <stdio.h>
#include <stdlib.h>


int jogodavelha(){
	int num1, num2, jogada, val, cont;
	int i, j, matriz[3][3] = {0};
	
	cont = 1;
	
	printf("-----------Bem vindo ao jogo da 1/2-----------\n");
	printf("1 - Neste jogo, nao existe o X nem o O, eles foram substituidos pelo 1 e 2.\n");
	printf("2 - Quem joga primeiro eh o 1.\n");
	printf("3 - O jogo devera solicitar do usuario, a linha que ele quer colocar o seu marcador.\n");
	printf("4 - Logo depois ele solicitara ao usuario a coluna.\n");
	printf("5 - Para sair do game, digite qualquer numero acima de 3 na opcao de linha\n\n");
	
	printf("\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	do{
		//Aqui é verificado se algum jogador consegui ganhar, se isso acontecer, o contador recebera 10
		if(matriz[0][0] == 1 && matriz[0][1] == 1 && matriz[0][2] == 1){
			printf("O Jogador 1 ganhou");
			cont = 10;
		}else if(matriz[0][0] == 1 && matriz[1][1] == 1 && matriz[2][2] == 1){
			printf("O Jogador 1 ganhou");
			cont = 10;
		}else if(matriz[2][0] == 1 && matriz[2][1] == 1 && matriz[2][2] == 1){
			printf("O Jogador 1 ganhou");
			cont = 10;
		}else{
			if(matriz[0][0] == 2 && matriz[0][1] == 2 && matriz[0][2] == 2){
				printf("O Jogador 1 ganhou");
				cont = 10;
			}else if(matriz[0][0] == 2 && matriz[1][1] == 2 && matriz[2][2] == 2){
				printf("O Jogador 1 ganhou");
				cont = 10;
			}else if(matriz[2][0] == 2 && matriz[2][1] == 2 && matriz[2][2] == 2){
				printf("O Jogador 1 ganhou");
				cont = 10;
			}
		}
		//Caso o contador seja igual a dez, isso significa que algum jogador conseguiu ganhar, então, o programa é finalizado
		//caso contrario, o processo vai continuar rodadando
		if(cont == 10){
			exit(0);
		}else{
			printf("Digite a linha:");
			scanf("%d", &num1);
			printf("Digite a coluna:");
			scanf("%d", &num2);
		}
		
		if(num1 > 3){
			num1 = 10;
		}
		//Aqui é realizado a troca dos jogadores, o contador é iniciado com 1, então o primeiro jogador deverá lançar o numero 1
		if(cont == 1){
			val = 1;
			cont = 0;
		}else{
			val = 2;
			cont = 1;
		}

		if(num1 == 1){
			num1 = 0;
		}else if(num1 == 2){
			num1 = 1;
		}else if(num1 == 3){
			num1 = 2;
		}else{
			printf("A opção digitada eh invalida");
		}
		
		if(num2 == 1){
			num2 = 0;
		}else if(num2 == 2){
			num2 = 1;
		}else if(num2 == 3){
			num2 = 2;
		}else{
			printf("A opção digitada eh invalida");
		}
		
		
		
		matriz[num1][num2] = val;
		system("cls");
		printf("-----------Bem vindo ao jogo da 1/2-----------\n");
		
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
		
		
	}while(num1 < 3);
	
	system("cls");
	printf("-----------Bye!-----------\n");
	return 0;
}
