#include <stdio.h>
#include <stdlib.h>

void tamanhoStr(char *str[],int *tmh){
	
	for(int i=0; *str != '\0'; i++){
		*tmh += 1;
	}
}

int main(){
	char nome[10] = {'a'};
	int tamanho;
	printf("Digite uma palavra: ");
	scanf("%20[^\n]", nome);
	
	tamanhoStr(&nome, &tamanho);
	
	printf("Tamanho da String %d", tamanho);
	
}
