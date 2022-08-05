#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[20][20], i, j;
	
	//Construindo a matriz
	for (i = 0; i < 20; i++){
		for (j = 0; j < 20; j++){
			mat[i][j] = rand() % 10;
		}
	}
	
	//Imprimindo ela
	for (i = 0; i < 20; i++){
		for (j = 0; j < 20; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//Imprimindo somente os itens abaixo da diagonal principal
	for (i = 0; i < 20; i++){
		for (j = 0; j < 20; j++){
			if (j >= i){
				printf("- ");
			}else{
				printf("%d ", mat[i][j]);
			}
		}
		
		printf("\n");
	}
}
