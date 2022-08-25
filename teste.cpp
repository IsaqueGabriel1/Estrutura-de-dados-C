#include <stdio.h>
#include <stdlib.h>


int soma(int ax,int bx){
	return ax + bx;
}

int main(){
	int x1, x2, s;
	
	x1 = 2;
	x2 = 2;
	
	s = soma(x1, x2);
	printf("%d", s);
	return 0;	
}



