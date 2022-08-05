#include <stdio.h>

int main() {
	int numero;
	
	printf("Digite o numero que deseja checar:\n");
	scanf("%d", &numero);
	
	//Checagem Par ou Ímpar
	if (numero % 2 == 0)
		printf("Par\n");
	else
		printf("Ímpar\n");
	
	//Checagem Positivo ou Negativo
	if (numero < 0)
		printf("Negativo");
	else
		printf("Positivo");
}
