#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat_1[10][10], i, j;
	float mat_2[10][10];
	
	//Construindo a Matriz 1
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			mat_1[i][j] = rand() % 10;
		}
	}
	
	//Imprimindo a Matriz 1
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			printf("%d ", mat_1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//Construindo a Matriz 2
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			mat_2[i][j] = (float) mat_1[i][j] / mat_1[i][i];
		}
	}
	
	//Imprimindo a Matriz 2
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			printf("%.1f ", mat_2[i][j]);
		}
		printf("\n");
	}
}
