#include <stdio.h>
#include <stdlib.h>


void retira_brancos(char *frase){
	int i;
	for(i=0; *frase != '\0'; i++){
		if(*(frase++) == ' '){
			*frase = '\7';
		}
	}
}

int main(){
	char frase[30] = {"cavalo di caprio"};
	char *pf = frase;
	int i;
	printf("endereco de frase %d", &frase);
	printf("\nendereco de pf    %d", pf);
	
	retira_brancos(pf);
	
	printf("\n");
	
	for(i=0; *pf != '\0'; i++){
		printf("%c", *pf++);
	}
	printf("\n");
	
	
	return 0;
}
