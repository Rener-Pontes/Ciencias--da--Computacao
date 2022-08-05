#include <stdio.h>

int main() {
	int numero, comparador;
	int operador = 0;
	
	printf("Digite o numero que deseja verificar\n");
	scanf("%d", &numero);
	
	comparador = numero;
	
	while (numero != 0){
		operador = (operador * 10) + (numero % 10);
		numero /= 10;
	}
	if (operador == comparador){
		printf("É palíndromo\n");
	}else{
		printf("Não é palíndromo\n");
	}
}
