#include <stdio.h>
#include <stdlib.h>

void soma(int *pA, int *pB, int *s){
	*s = *pA + *pB;
}
int main(){
	int a, b, s;
	a = 2;
	b = 2;
	
	soma(&a, &b, &s);
	
	printf("%d", s);
	
	return 0;
}
