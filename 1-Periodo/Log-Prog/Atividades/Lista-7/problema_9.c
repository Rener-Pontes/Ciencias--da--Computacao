#include <stdio.h>

void num_perf (int vet[]){
	int i, j = 0, numero = 2, teste, repeticao = 0;
	
	while (repeticao < 3){
		teste = 0;
		for (i = 1; i < numero; i++){
			if (numero % i == 0){
				teste += i;
			}
		}
		
		if (teste == numero){
			vet[j] = teste;
			repeticao++;
			j++;
		}
		numero++;
	}
}

int main() {
	int vetor[3], i;
	
	num_perf(vetor);
	
	for (i =0; i < 3; i++)
		printf("%d\n", vetor[i]);
}
