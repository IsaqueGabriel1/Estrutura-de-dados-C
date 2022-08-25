#include <stdio.h>
#include <stdlib.h>


typedef struct{
	int matricula;
	float nota;
} Aluno;

void arredondaNota(float *n){
	if(*n >= 2.5){
		*n = 3.0;
	}
}

int main(){
	Aluno *Pa=(Aluno*)malloc(sizeof(Aluno)*3);
	
	Pa->matricula = 123456;
	Pa->nota = 2.5;
	arredondaNota(&Pa->nota);
	
	printf("Matricula=%d Nota=%f", Pa->matricula, Pa->nota);
}
