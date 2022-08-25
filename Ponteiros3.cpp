#include <stdio.h>

int main(){
	 
	struct ficha_aluno
	{
		char nome[40];
	 	int numero;
	 	float nota;
	};
	
	struct ficha_aluno aluno;
	
	printf("Digite o nome do aluno: ");
	fgets(aluno.nome, 40, stdin);
	
	printf("Digite o numero do aluno: ");
	scanf("%d", &aluno.numero);
	
	printf("Digite a nota do aluno: ");
	scanf("%f", &aluno.nota);
	
	printf("Nome: %s", aluno.nome);
	printf("Numero: %d", aluno.numero);
	printf("\n nota: %.2f", aluno.nota);
	return 0;
} 
