//Faça um programa que solicite o preço de uma mercadoria e o percentual de desconto. Exiba o valor do desconto e o preço a pagar.

#include <stdio.h>

int main() {
	float preco, p_desconto, v_desconto;
	
	printf("Digite o preço do produto: ");
	scanf("%f", &preco);
	printf("Digite a porcentagem do desconto:\n");
	printf(":. Inserir conforme exemplo: 55%% -> 0.55\n");
	scanf("%f", &p_desconto);
	
	v_desconto = preco * p_desconto;
	preco = preco - v_desconto;
	
	printf("O produto tem R$ %.2f de desconto e custa R$ %.2f\n");
}
