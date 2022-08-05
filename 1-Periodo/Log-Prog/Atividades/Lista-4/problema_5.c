#include <stdio.h>

int main() {
	int numero_1, numero_2, resto;
	
	printf("Digite dois numeros, o que deseja dividir e por quanto está dividindo.\n");
	scanf("%d %d", &numero_1, &numero_2);
	
	while (numero_2 <= numero_1){
		resto = numero_1 - numero_2;
		numero_1 = numero_1 - numero_2;
	}
	
	printf("O resto da divisão é %d\n", resto);
}
