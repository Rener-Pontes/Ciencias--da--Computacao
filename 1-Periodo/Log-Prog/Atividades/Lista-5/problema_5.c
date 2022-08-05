#include <stdio.h>

int main() {
	int vetor[10], numero, confirm;
	
	for (int i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
	}
	
	for (int i = 0; i < 6 - 1; i++){
		printf("Digite um numero para checagem: ");
		scanf("%d", &numero);
		
		for (int j = 0; j < 10; j++){
			if (numero == vetor[j]){
				confirm = 1;
			}
		}
		if (confirm < 0){
			printf("O numero está no vetor");
		}else{
			printf("O numero não está no vetor");
		}
		
		printf("\n");
		confirm = 0;
	}
}
