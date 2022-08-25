#include <stdio.h>
#include <stdlib.h>



int main(){
	int i, j, matriz[3][3] = {1,2,3,4,5,6,7,8,9};
	char matz2[3][4] = {'a','b','c','d','e','f','g','h','i','j','k','l'};
	
	//matriz[linha][coluna]
	//printf("%d ", matriz[0][2]);
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d  ", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
