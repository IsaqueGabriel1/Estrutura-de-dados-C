#include <stdio.h>
#include <stdlib.h>

	typedef struct{
		int hora;
		int minuto;
		int segundo;
	}Hora;
	

int main(){
	Hora agora, *depois;
	depois = &agora;
	
	depois->hora = 20;
	depois->minuto = 80;
	depois->segundo = 50;
	
	int somatorio = 100;
	
	Hora antes;
	
	antes.hora = somatorio + depois->segundo;
	antes.minuto = agora.hora + depois->minuto;
	antes.segundo = depois->minuto + depois->segundo;
	
	printf("%i: %i: %i", antes.hora, antes.minuto, antes.segundo);
	
	getchar();
	
}
