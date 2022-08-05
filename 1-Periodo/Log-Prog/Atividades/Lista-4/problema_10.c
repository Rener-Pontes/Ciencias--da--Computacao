#include <stdio.h>
#include <math.h>

int main() {
	float numero, p = 0, b = 2;
	
	printf("Digite o numero que deseja retirar a raiz\n");
	scanf("%f", &numero);
	
	while (fabs(numero - pow(p, 2)) >= 0.0001){
		p = (b + (numero / b)) / 2;
		b = p;
	}
	printf("A raiz é %.2f\n", p);
}
