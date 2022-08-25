#include <stdio.h>
#include <stdlib.h>


void calcule(int n1,int n2,int *s,int *p){
	*s = n1 + n2;
	*p = n1 * n2;
}

int main(){
	int x = 3, y = 4;
	int soma, prod;
	
	calcule(x, y, &soma, &prod);
	printf("soma=%d produto=%d\n", soma, prod);
	

	
	//alocando memoria para o ponteiro
	//int *px;
	//px=(int*)malloc(sizeof(int));
}
