#include <stdio.h>

int main(){
	int x = 10;
	int *p = &x;
	
	//o valor de x será alterado porque o ponteiro está apontando no endereco
	//e apartir do endereco da memória ele se torna capaz de mudar o valor de x
	int y = 20;
	*p = y;
	
	//int *ponteiro;
	//ponteiro = &x;
	//com (*) faço acesso ao valor da memória
	//com (&) ou apenas o nome do ponteiro, faço acesso a seu endereco
	printf("%i %i", x, y);
	return 0;
}
