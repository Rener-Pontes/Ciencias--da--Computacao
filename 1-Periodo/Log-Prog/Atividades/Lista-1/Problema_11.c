#include <stdio.h>

int main() {
	float nota1, nota2, nota3, media;
	
	printf("Digite a 1o nota: \n");
	scanf("%f", &nota1);
	
	printf("Digite a 2o nota: \n");
	scanf("%f", &nota2);
	
	printf("Digite a 3o nota: \n");
	scanf("%f", &nota3);
	
	media = (nota1 * 2 + nota2 * 4 + nota3 * 6) / 12;
	
	printf("A média das notas é %.2f", media);
}
