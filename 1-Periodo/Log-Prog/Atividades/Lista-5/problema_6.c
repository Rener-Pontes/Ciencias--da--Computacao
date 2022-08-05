#include <stdio.h>

int main(){
	int vetor[9], i, j, resto, confirm = 0;
	
	printf("Digite 9 numeros inteiros:\n");
	for (i = 0; i < 9; i++){
		scanf("%d", &vetor[i]);
	}
	i = 0;
	while (i < 9){
		for (j = 1; j <= vetor[i]; j++){
			resto = vetor[i] % j;
			if (resto == 0){
				confirm++;
			}
		}
		if (confirm == 2){
			printf("O numero %d é primo e está na %d posição\n", vetor[i], i);
		}
		confirm = 0;
		i++;
	}
}
