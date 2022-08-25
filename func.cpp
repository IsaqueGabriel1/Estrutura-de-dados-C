#include <stdio.h>
#include <stdlib.h>


int soma(int n1, int n2){
	return n1 + n2;
}

int menor(int n1, int n2){
	int resp;
	if(n1 > n2){
		return resp = 1;
	}else{
		return resp = 0;
	}
}

int main(){
	int n1, n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("A soma eh.......:%d", soma(n1, n2));
	
	if(menor(n1, n2) == 1){
		printf("\n%d eh maior que %d", n1, n2);
	}else{
		printf("\n%d eh menor que %d", n1, n2);
	}
	return 0;
}
