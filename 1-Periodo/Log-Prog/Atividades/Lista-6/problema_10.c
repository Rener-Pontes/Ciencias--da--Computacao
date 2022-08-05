#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[5][5], clone[5][5], i, j;
	
	//Construindo a Matriz
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			mat[i][j] = rand() % 10;
		}
	}
	
	//Imprimindo a Matriz
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//Clonando a Matriz
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			clone[i][j] = mat[i][j];
		}
	}
	
	//Trocando
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			mat[i][j] = clone[j][i];
		}
	}
	
	//Imprimindo a Troca
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}
