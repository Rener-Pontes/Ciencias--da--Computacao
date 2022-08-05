#include <stdio.h>

int main() {
	int vetor[8], positivo[8], negativo[8];
	int tp, tn, k = 0,p = 0, n = 0;
	
	for (k = 0; k < 8; k++)
		scanf("%d", &vetor[k]);
	
	for (k = 0; k < 8; k++){
		if (vetor[k] > 0){
			positivo[p] = vetor[k];
			p++;
		}
		if (vetor[k] < 0){
			negativo[n] = vetor[k];
			n++;
		}
	}
	tp = p;
	tn = n;
	
	if (p > 0){
		printf("POSITIVO\n");
		for (p = 0; p < tp; p++){
			printf("%d\n", positivo[p]);
		}
		printf("\n");
	}
	if (n > 0){
		printf("NEGATIVO\n");
		for (n = 0; n < tn; n++){
			printf("%d\n", negativo[n]);
		}
	}
}
