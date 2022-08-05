#include <stdio.h>
#include <stdlib.h>

void fatorial (int a[], int b[]){
	int i, j;
	
	for (i = 0; i < 10; i++){
		b[i] = 1;
		for (j = 1; j <= a[i]; j++){
			b[i] *= j;
		}
	}
}

int main() {
	int original[10], fatoriado[10], i;
	
	for (i = 0; i < 10; i++){
		original[i] = rand() % 10;
		printf("%d ", original[i]);
	}
	printf("\n");
	
	fatorial(original, fatoriado);
	
	for (i = 0; i < 10; i++){
		printf("%d ", fatoriado[i]);
	}
	printf("\n");
}
