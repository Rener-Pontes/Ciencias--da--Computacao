#include <stdio.h>

int main() {
	int vetor[10], repeticao = 0;
	
	printf("Digite 10 numeros inteiros:\n");
	for (int i = 0; i < 10; i++)
		scanf("%d", &vetor[i]);
	for (int i = 0; i < 10; i++){
		for (int k = 0; k < 10; k++){
			if (vetor[i] == vetor[k]){
				repeticao++;
			}
		}
		printf("O numero %d se aparece %d vez(es).\n", vetor[i], repeticao);
		
		repeticao = 0;
	}
}
