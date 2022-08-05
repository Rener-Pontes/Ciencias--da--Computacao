#include <stdio.h>

int main(){
	int x[10], maior = 0, menor = 10000, p_mai, p_men;
	
	printf("Digite 10 numero inteiros:\n");
	for (int i = 0; i < 10; i++){
		scanf("%d", &x[i]);
		
		if (x[i] < menor){
			menor = x[i];
			p_men = i;
		}
		if (x[i] > maior){
			maior = x[i];
			p_mai = i;
		}
	}
	
	printf("O maior numero é %d e sua posição é %d\n", maior, p_mai);
	printf("O menor numero é %d e sua posição é %d\n", menor, p_men);
}
