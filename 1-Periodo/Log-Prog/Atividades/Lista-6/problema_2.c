#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[10][30], prim[10][30], i, j, k, l;
	
	//Construindo a Matriz original
	for (i = 0; i < 10; i++){
		for (j = 0; j < 30; j++){
			mat[i][j] = rand() % 10;
			
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	//Clonando a Matriz original
	for (i = 0; i < 10; i++){
		for (j = 0; j < 30; j++){
			prim[i][j] = mat[i][j];
		}
	}
	
	printf("\n");
	
	//Invertendo
	k = 9;
	for (i = 0; i < 10; i++){
		l = 0;
		for (j = 0; j < 30; j++){
			mat[i][j] = prim[k][l];
			l++;
			
			printf("%d ", mat[i][j]);
		}
		k--;
		
		printf("\n");
	}
}
