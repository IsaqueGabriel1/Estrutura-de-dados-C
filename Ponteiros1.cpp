#include <stdio.h>

int main(){
	int x = 10;
	int *p = &x;
	
	//o valor de x ser� alterado porque o ponteiro est� apontando no endereco
	//e apartir do endereco da mem�ria ele se torna capaz de mudar o valor de x
	int y = 20;
	*p = y;
	
	//int *ponteiro;
	//ponteiro = &x;
	//com (*) fa�o acesso ao valor da mem�ria
	//com (&) ou apenas o nome do ponteiro, fa�o acesso a seu endereco
	printf("%i %i", x, y);
	return 0;
}
