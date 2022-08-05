#include <stdio.h>

int main() {
	int vetor[6];
	printf("Digite 6 numeros inteiros:\n");
	for (int i = 0; i < 6; i++){
		scanf("%d", &vetor[i]);
	}
	for (int i = 5; i >= 0; i--){
		printf("%d\n", vetor[i]);
	}
}
