#include <stdio.h>

int main() {
	int troco, dinheiro_50, dinheiro_10, dinheiro_1;
	
	printf("Digite o troco para dar:\n");
	scanf("%d", &troco);
	
	dinheiro_50 = troco / 50;
	dinheiro_10 = (troco - (dinheiro_50 * 50)) / 10;
	dinheiro_1 = troco - ((dinheiro_50 * 50) + (dinheiro_10 * 10));
	
	printf("O troco é %d moeda(s) de 50 dinheiros, %d moeda(s) de 10 dinheiro(s) e %d moeda(s) de 1 dinheiro\n", dinheiro_50, dinheiro_10, dinheiro_1);
}
