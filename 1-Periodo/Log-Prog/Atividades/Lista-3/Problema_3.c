#include <stdio.h>

int main() {
	int lado_a, lado_b, lado_c;
	
	printf("Digite o valor dos lados:\n");
	scanf("%d %d %d", &lado_a, &lado_b, &lado_c);
	
	if ((lado_a < lado_b + lado_c) && (lado_b < lado_a + lado_c) && (lado_c < lado_a + lado_b)){
		if ((lado_a == lado_b) && (lado_a == lado_c)){
			printf("Equilátero");
		}else if ((lado_a != lado_b) && (lado_a != lado_c) && (lado_b != lado_c)){
			printf("Escaleno\n");
		}else{
			printf("Isósceles\n");
		}
	}else{
		printf("Não é um triângulo\n");
	}
}
