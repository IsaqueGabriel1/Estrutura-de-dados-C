#include <stdio.h>
#include <stdlib.h>

struct lista{
	int valor;
	lista *proximo;
};

int main(){
	
	lista m1, m2, m3;
	//aqui estou a dizer que gancho esta em m1
	lista *gancho = &m1;
	
	m1.valor = 10;
	m2.valor = 20;
	m3.valor = 30;
	
	//quando gancho estiver em m1, o proximo gancho será m2
	m1.proximo = &m2;
	//quando gancho estiver em m2, o proximo gancho será m3
	m2.proximo = &m3;
	//quando gancho estiver em m3, o proximo gancho será nulo
	m3.proximo = (struct lista *)0;
	
	while(gancho != (struct lista *)0){
		printf("%i\n", gancho->valor );
		gancho = gancho->proximo; 
	}
	return 0;	
}

