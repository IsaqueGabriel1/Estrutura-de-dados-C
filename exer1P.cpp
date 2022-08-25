#include <stdio.h>

int main(){
	char nome[10] = "Isaque";
	
	for(int i=0; i<10; i++){
		if(nome[i] == 'a'){
			nome[i] = 'm';
		}
		printf("%c \n", nome[i]);
	}
	
	return 0;
}
