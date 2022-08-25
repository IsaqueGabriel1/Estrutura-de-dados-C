#include <stdio.h>
#include <conio.h>
struct pessoa{
	char nome[20];
	int idade;
	double peso;
};


int main(){
	struct pessoa p1;
	
	p1.nome[20] = "Isaque";
	p1.idade = 20;
	p1.peso = 180.100;

	printf("Nome: %s \n Idade: %d \n peso: \n", p1.nome, p1.idade, p1.peso);
	return 0;
} 
