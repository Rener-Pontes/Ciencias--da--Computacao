#include <stdio.h>

int main() {
	int numero;
	int contador = 1;
	int primo = 0;
	
	printf("Digite o numero que deseja verificar\n");
	scanf("%d", &numero);
	while (contador <= numero){
		if (numero % contador == 0)
			primo++;
		contador++;
	}
	if (primo == 2){
		printf("O numero é primo\n");
	}else{
		printf("O número não é primo\n");
	}
}
