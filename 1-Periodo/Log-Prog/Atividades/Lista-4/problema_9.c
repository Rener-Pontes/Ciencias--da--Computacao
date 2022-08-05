#include <stdio.h>

int main(){
	int numero, soma;
	int repeticao = 1;
	int anterior = 0, posterior = 1;
	
	printf("Digite quantos termos deseja:\n");
	scanf("%d", &numero);
	
	printf("0, 1");
	while (repeticao <= numero - 2){
		soma = anterior + posterior;
		
		printf(", %d", soma);
		
		anterior = posterior;
		posterior = soma;
		repeticao++;
	}
	printf("\n");
}
