#include <stdio.h>

int main() {
	int vetor[8], soma, x, y;
	
	printf("Digite 8 numeros inteiros:\n");
	for (int i = 0;i < 8; i++){
		scanf("%d", &vetor[i]);
	}
	
	printf("Agora digite 2 numeros, de 0 a 7, que represente as posições que dos numeros deseja somar:\n");
	scanf("%d %d", &x, &y);
	
	soma = vetor[x] + vetor[y];
	
	printf("A soma deu %d\n", soma);
}
