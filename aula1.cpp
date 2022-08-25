#include<stdio.h>

int calc(int num, int num2, int op){
	if(op == 1){
		return num + num2;
	}else if(op == 2){
		return num - num2;
	}else if(op == 3){
		return num / num2;
	}else if(op == 4){
		return num * num2;
	}else{
		printf("Operação invalida");
	}
}

int operacoes(){
	printf("[1]\n");
	printf("[2]\n");
	printf("[3]\n");
	printf("[4]\n");
}

int main(){
	int num1, num2, op;
	operacoes();
	do{
		printf("Digite o numero da operacao que deseja realizar:");
		scanf("%d", &op);
	}while(op == 0);
	
	do{
		printf("\nDigite o primeiro numero:");
		scanf("%d", &num1);
	}while(num1 == 0);

	do{
		printf("\nDigite o segundo numero:");
		scanf("%d", &num2);
	}while(num2 == 0);
	
	int res = calc(num1, num2, op);
	
	printf("%d", res);
}
