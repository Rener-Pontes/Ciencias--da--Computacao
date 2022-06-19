#include <stdio.h>

int main() {
	int base, altura, perimetro, area;
	
	printf("Digite o comprimento dos lados do retângulo: \n");
	scanf("%d %d", &base, &altura);
	
	area = base * altura;
	perimetro = base * 2 + altura * 2;
	
	printf("O retângulo de lados %d e %d, tem perímetro %d e area %d", base, altura, perimetro, area);
}
