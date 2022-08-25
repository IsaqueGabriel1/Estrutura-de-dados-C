#include <stdio.h>
#include <stdlib.h>


int teste(int num){
	if(num = 0){
		num = 1;
	}else{
		num = 0;
	}
	return num;
}

int main(){
	int num1, num2, jogada, val, cont;
	int i, j, matriz[3][3] = {0};
	cont = teste(0);
	printf("-----------Bem vindo ao jogo da 1/2-----------\n");
	printf("para colocar o X na posicao certo, utilize a seguinte colinha:\n");
	printf("[linha][coluna]\n\n");
	printf("Para sair do game, digite qualquer numero acima de 3 na opcao de linha\n\n");

	do{
		printf("Digite a linha:");
		scanf("%d", &num1);
		printf("Digite a coluna:");
		scanf("%d", &num2);

		if(cont == 1){
			val = 1;
			cont = teste(1);
		}else{
			val = 2;
			cont = teste(0);
		}

		matriz[num1][num2] = val;

		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
	}while(num1 < 3);

	return 0;
}
