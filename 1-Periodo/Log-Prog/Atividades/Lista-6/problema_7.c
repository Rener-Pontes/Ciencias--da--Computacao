#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[10][20], soma[10], i, j;
	
	//Construindo a matriz
	for (i = 0; i < 10; i++){
		for (j = 0; j < 20; j++){
			mat[i][j] = rand() % 10;
		}
	}
	
	//Imprimindo ela
	for (i = 0; i < 10; i++){
		for (j = 0; j < 20; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//Obtendo a soma de cada linha e imprimindo o resultado
	for (i = 0; i < 10; i++){
		soma[i] = 0;
		for (j = 0; j < 20; j++){
			soma[i] += mat[i][j];
		}
		
		printf("soma da linha %d = %d\n", i, soma[i]);
	}
}
