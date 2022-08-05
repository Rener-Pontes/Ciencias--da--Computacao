#include <stdio.h>

int main() {
	int ano;
	float preco, imposto;
	
	printf("Digite o ano do modelo do carro\n");
	scanf("%d", &ano);
	
	printf("Digite o preço do carro\n");
	scanf("%f", &preco);
	
	if (ano < 1990)
		imposto = preco * 0.01;
	else
		imposto = preco * 0.015;
	
	printf("O imposto do carro é %.2f\n", imposto);
}
