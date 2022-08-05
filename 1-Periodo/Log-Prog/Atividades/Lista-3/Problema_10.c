#include <stdio.h>

int main() {
	int xicara;
	float litros, colher;
	
	printf("Quantas xícaras devem ser feitas?\n");
	scanf("%d", &xicara);
	
	litros = xicara * 0.05;
	colher = litros * 5;
	
	printf("Será necessário %.2f litros d'água e %.1f colheres de café\n", litros, colher);
}


// 1 litro --------- 5 colheres
// xicara 0.05 l ---- 15 g
