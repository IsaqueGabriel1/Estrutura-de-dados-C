#include <stdio.h>
#include <stdlib.h>

int main(){
	char velha[3][3] = {'a','a','a','a','a','a','a','a','a',};
	int i, j, linha, coluna, cont;
	char val;
	cont=0;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%c ", velha[i][j]);
		}
		printf("\n");
	}
	
	while(linha != 5){
		
		if(velha[0][0] == 'X' && velha[0][1] == 'X' && velha[0][2] == 'X'){
			printf("O Jogador 1 ganhou");
			cont = 10;
		}else if(velha[0][0] == 'X' && velha[1][1] == 'X' && velha[2][2] == 'X'){
			printf("O Jogador 1 ganhou");
			cont = 10;
		}else if(velha[2][0] == 'X' && velha[2][1] == 'X' && velha[2][2] == 'X'){
			printf("O Jogador 1 ganhou");
			cont = 10;
		}else{
			if(velha[0][0] == 'O' && velha[0][1] == 'O' && velha[0][2] == 'O'){
				printf("O Jogador 1 ganhou");
				cont = 10;
			}else if(velha[0][0] == 'O' && velha[1][1] == 'O' && velha[2][2] == 'O'){
				printf("O Jogador 1 ganhou");
				cont = 10;
			}else if(velha[2][0] == 'O' && velha[2][1] == 'O' && velha[2][2] == 'O'){
				printf("O Jogador 1 ganhou");
				cont = 10;
			}
		}
		
		do{
			printf("Digite a linha:");
			scanf("%d", &linha);
			printf("Digite a coluna:");
			scanf("%d", &coluna);
			
			if(linha == 1){
				linha = 0;
			}else if(linha == 2){
				linha = 1;
			}else if(linha == 3){
				linha = 2;
			}else{
				printf("A opcao digitada eh invalida");
			}
			
			if(coluna == 1){
				coluna = 0;
			}else if(coluna == 2){
				coluna = 1;
			}else if(coluna == 3){
				coluna = 2;
			}else{
				printf("A opcao digitada eh invalida");
			}
		}while(linha > 3 || coluna > 3);
		
		if(cont == 0){
			val = 'X';
			cont = 1;
		}else{
			val = 'O';
			cont = 0;
		}
		
		velha[linha][coluna] = val;
		system("cls");
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				printf("%c ", velha[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
