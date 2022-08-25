#include <stdio.h>


int main(){
	char frase[] = "ISAQUE";
	char *p;
	int i, n=0;
	
	for(p=frase; *p != '\0'; p++){
		if(*p == 'A')
			n++;
	}
	printf("Letras A = %d\n", n);
}
