#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mostrarVetor(int vet[]){
	int i = 0;
	for(i=0; i<10; i++){
		printf("%d  ", vet[i]);
	}
}


int main(){
	int num[10] = {0};
	int i, val; 
	//Utiliza a hora do computador para trazer os numeros aleatorios atraves da lib <time.h>
	srand(time(NULL)); 
	
	for(i=0; i<10; i++){
		//os numeros aleatorios são aplicados no vetor atraves da funcao rand();
		num[i] = rand();
	}
	mostrarVetor(num);
	return 0;
}
