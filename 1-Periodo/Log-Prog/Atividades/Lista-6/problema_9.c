#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat_a[3][2], mat_b[2][4], prod[3][4], i, j, k;
	
	//Construindo a Matriz A
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			mat_a[i][j] = rand() % 10;
		}
	}
	
	//Imprimindo a Matriz A
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			printf("%d ", mat_a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//Construindo a Matriz B
	for (i = 0; i < 2; i++){
		for (j = 0; j < 4; j++){
			mat_b[i][j] = rand() % 10;
		}
	}
	
	//Imprimindo a Matriz B
	for (i = 0; i < 2; i++){
		for (j = 0; j < 4; j++){
			printf("%d ", mat_b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//Obtendo o Produto
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			prod[i][j] = 0;
			 for (k = 0; k < 2; k++){
				 prod[i][j] += mat_a[i][k] * mat_b[k][j];
			 }
		}
	}
	
	//Imprimindo o Produto
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("%d ", prod[i][j]);
		}
		printf("\n");
	}
}
