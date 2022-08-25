#include <stdio.h>
#include <stdlib.h>


void teste(char *frase){
	for(int i=0; frase[i] != '\0'; i++){
		if(frase[i] == ' '){
			frase[i] = '\7';
		}
		//printf("%c \n", frase[i]);
	}
}

int main(){
	char frase[20];
	
	printf("Digite uma string qualquer: ");
	fgets(frase,20, stdin);
	
	teste(frase);
	printf(frase);
	return 0;
}
