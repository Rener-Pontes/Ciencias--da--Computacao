#include <stdio.h>

int main() {
	int numero, alg_1, alg_2, alg_3;
	
	printf("Digite o numero com 3 algarismos.\n");
	printf("Caso o numero não tenha complete com 0\n");
	printf("Ex: 007, 086\n");
	scanf("%d", &numero);
	
	numero = numero * 2;
	alg_1 = numero / 100;
	alg_2 = ((alg_1 * 10) - numero / 10) * -1;
	alg_3 = (((alg_1 * 100) + (alg_2 * 10)) - numero) * -1;
	
	printf("%d%d%d", alg_3, alg_2, alg_1);
}
