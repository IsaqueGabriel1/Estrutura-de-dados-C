#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mostrarVetor(int vet[]){
	int i = 0;
	for(i=0; i<40; i++){
		printf("%d  ", vet[i]);
	}
}

int repeticaoNum(int vet[], int numProcurado){
	int i = 0;
	int cont = 0;
	for(i=0; i<10; i++){
		if (vet[i] == numProcurado){
			cont += 1;
		}
	}
	return cont;
}


int main(){
	int num[40] = {0};
	int i, val; 
	//Utiliza a hora do computador para trazer os numeros aleatorios atraves da lib <time.h>
	srand(time(NULL)); 
	
	for(i=0; i<40; i++){
		//os numeros aleatorios são aplicados no vetor atraves da funcao rand();
		//utilizado o resto da divisao para que o vetor tenha um intervalo de numeros aleatorios
		//num[i] = 1 + rand() % 10; Caso queria que comece apartir do numero 1 ou de qualquer outro numero
		//basta adicionalo antes da funcao rend(), ficará assim: intervaloI + rand() % intervaloF
		num[i] = 1 + rand() % 99;
	}
	mostrarVetor(num);
	printf("\nO numero 10 se repetiu %d vezes", repeticaoNum(num, 2));
	return 0;
}
