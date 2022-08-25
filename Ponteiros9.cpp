#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int *pHora;
	int *pMinuto;
	int *pSegundo;
}Horario;

int main(){
	Horario hoje;
	int hora = 200;
	int minuto = 300;
	int segundo = 400;
	
	//membro ponteiro
	hoje.pHora = &hora;
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;
	
	//observar o valor de um membro ponteiro
	printf("Hora %i\n", *hoje.pHora);
	printf("Minuto %i\n", *hoje.pMinuto);
	printf("Segundo %i\n", *hoje.pSegundo);
	
	//acessando valor
	*hoje.pSegundo = 1000;
	
	//acessando endereco de memoria
	//hoje.pSegundo = 1000;
	
	printf("Segundo %i\n", *hoje.pSegundo);
	getchar();	
}
