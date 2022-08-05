#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat_a[10][10], mat_b[10][10], soma[10][10], i, j;
	
	//Montando as Matrizes
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j ++){
			mat_a[i][j] = rand() % 10;
			mat_b[i][j] = rand() % 10;
		}
	}
	
	//Imprimindo as duas Matrizes
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j ++){
			printf("0%d ", mat_a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j ++){
			printf("0%d ", mat_b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	
	//Somando as Matrizes
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j ++){
			soma[i][j] = mat_a[i][j] + mat_b[i][j];
		}
	}
	
	//Imprimindo a Soma
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j ++){
			if (soma[i][j] < 10)
				printf("0%d ", soma[i][j]);
			else
				printf("%d ", soma[i][j]);
		}
		printf("\n");
	}
}
