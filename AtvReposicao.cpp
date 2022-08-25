#include <stdio.h>
#include <stdlib.h>




int main(){
	char frase[30];
	int cont = 0;
	int i;
	
	
	scanf(" %30[^\n]", frase);
	
	for(i=0; frase[i] != '\0'; i++){
		if(frase[i] == ' '){
			cont++;
			frase[i] = '\7';
		}
	}
	
	printf("%d", cont);
	printf("\n");
	
	for(i=0; frase[i] != '\0'; i++){
			printf("%c", frase[i]);
		
	}
	
}
