#include <stdio.h>
#include <stdlib.h>


typedef struct{
	int RA;
	float nota;
} Aluno;

int main(){
	Aluno a, b;
	
	a.RA = 12345;
	a.nota = 2.3;
	
	printf("%d %f", a.RA, a.nota);
}
