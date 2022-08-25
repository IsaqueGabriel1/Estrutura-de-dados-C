#include <stdio.h>
#include <stdlib.h>


typedef struct{
	int matricula;
	float nota;
} Aluno;



int main(){
	Aluno P[3];
	
	int i;
	for(i=0; i<3; i++){
		P[i].matricula=200+i;
		P[i].nota=7.0 + i;
	}
	system("cls");
	for(i=0; i<3; i++){
		printf("\nMatriculaa: %d, Nota= %.1f\n", P[i].matricula, P[i].nota);
	}
	return 0;
}
