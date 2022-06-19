#include <stdio.h>

int main() {
	int base, altura, area;
	
	printf("Digite a base do triângulo: \n");
	scanf("%d", &base);
	
	printf("Digite a altura: \n");
	scanf("%d", &altura);
	
	area = base * altura / 2;
	
	printf("O triângulo de base %d e altura %d, tem a area sendo %d", base, altura, area);
}
