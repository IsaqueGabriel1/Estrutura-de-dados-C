#include <stdio.h>


int main(){
	int vet[4] = {10, 12, 30, 45};
	int *pv;
	
	pv = vet; //ou pv=&vet[0]
	for(int i=0; i<4; i++){
		//printf("%d \n", vet[i]);
	}
	
	for(int i=0; i<4; i++){
		//Aqui temos uma forma de percorrer o vetor
		printf("%d \n", *pv++);
		//printf("%d \n", (*pv)++);dessa forma ele soma mais um no valor do ponteiro, no caso 10
	}
}
