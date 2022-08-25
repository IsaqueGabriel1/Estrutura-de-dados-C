#include <stdio.h>


void troca(int *a, int *b){
	//teste recebeu o conteudo de b; 4
	int teste = *b;
	//b recebe o conteudo de a; 3
	*b = *a;
	//a recebe o conteudo de teste; 4
	*a = teste;

}

int main(){
	int m, n;
	m=3;
	n=4;
	//passando os enderecos de m e n para realizar a troca de valores
	troca(&m, &n);
	
	printf("%d %d", m, n);
}
