#include <stdio.h>

int main(){
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	
	int *resultado;
	resultado = 6487548;
	
	
	//*p = x; o ponteiro aponta para o valor de x
	//*p = &x; o ponteiro aponta para o endereco de x
	 
	
	printf("Soma: %i", *resultado);

	return 0;
} 
