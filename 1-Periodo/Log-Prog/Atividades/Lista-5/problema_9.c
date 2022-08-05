#include <stdio.h>

int main() {
	int vetor1[10], vetor2[10], vetor[20];
	
	printf("Digite até 10 numeros:\n");
	for (int i = 0; i < 10; i++){
		scanf("%d", &vetor1[i]);
	}
	printf("Digite até 10 numeros:\n");
	for (int i = 0; i < 10; i++){
		scanf("%d", &vetor2[i]);
	}
	
	vetor[0] = vetor1[0];
	vetor[1] = vetor2[0];
	vetor[2] = vetor1[1];
	vetor[3] = vetor2[1];
	vetor[4] = vetor1[2];
	vetor[5] = vetor2[2];
	vetor[6] = vetor1[3];
	vetor[7] = vetor2[3];
	vetor[8] = vetor1[4];
	vetor[9] = vetor2[4];
	vetor[10] = vetor1[5];
	vetor[11] = vetor2[5];
	vetor[12] = vetor1[6];
	vetor[13] = vetor2[6];
	vetor[14] = vetor1[7];
	vetor[15] = vetor2[7];
	vetor[16] = vetor1[8];
	vetor[17] = vetor2[8];
	vetor[18] = vetor1[9];
	vetor[19] = vetor2[9];
	
	for (int i = 0; i < 20; i++){
		printf("%d\n", vetor[i]);
	}
}
