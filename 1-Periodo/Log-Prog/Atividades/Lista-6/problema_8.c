#include <stdio.h>
#include <stdlib.h>

int main() {
	float mat[20][3], media[20], media_g;
	int i, j;
	
	//Construindo a Matriz
	for (i = 0; i < 20; i++){
		for (j = 0; j < 3; j++){
			//scanf("%f", &mat[i][j]);
			mat[i][j] = rand() % 10 * 1.0;
		}
	}
	
	//Imprimindo ela
	for (i = 0; i < 20; i++){
		for (j = 0; j < 3; j++){
			printf("%.1f ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//Tirando a Media;
	for (i = 0; i < 20; i++){
		media[i] = 0;
		for (j = 0; j < 3; j++){
			media[i] += mat[i][j];
		}
		media[i] /= 3;
	}
	
	//Imprimindo a Media
	for (i = 0; i < 20; i++){
		printf("Aluno %d: %.1f\n", i, media[i]);
	}
	
	printf("\n");
	
	//Descobrindo a Media Geral
	media_g = 0;
	for (i = 0; i < 20; i++){
		media_g += media[i];
	}
	media_g /= 20;
	
	//Imprimindo a Media Geral
	printf("A media geral é %.1f\n", media_g);
}
