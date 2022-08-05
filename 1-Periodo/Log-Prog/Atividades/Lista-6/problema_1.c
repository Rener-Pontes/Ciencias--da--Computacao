#include <stdio.h>
#include <stdlib.h>

int main() {
	float matriz[10][10];
	int i, j;
	
	//Preenchendo a Matriz
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			matriz[i][j] = rand() % 10 * 1.0;
		}
	}
	
	//Mostrando a Matriz
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
				printf("%.1f ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//Mostrando a diagonal principal
	for (i = 0; i < 10; i++){
		printf("%.1f\n", matriz[i][i]);
	}
}
