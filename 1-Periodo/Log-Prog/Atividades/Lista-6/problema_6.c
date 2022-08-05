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
	
	//Imprimindo acima da Diagonal Pricipal
	for (i = 0; i < 20; i++){
		for (j = 0; j < 20; j++){
			if (j > i){
				printf("%d ", mat[i][j]);
			}else{
				printf("- ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	//Imprimindo acima da Diagonal Secundaria 
	for (i = 0; i < 20; i++){
		for (j = 0; j < 20; j++){
			if (j < 19 - i){
				printf("%d ", mat[i][j]);
			}else{
				printf("- ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	//Imprimindo entre as diagonais
	for (i = 0; i < 20; i++){
		for (j = 0; j < 20; j++){
			if ((j > i) || (j < 19 - i)){
					printf("%d ", mat[i][j]);
			}else{
				printf("- ");
			}
		}
		printf("\n");
	}
}
