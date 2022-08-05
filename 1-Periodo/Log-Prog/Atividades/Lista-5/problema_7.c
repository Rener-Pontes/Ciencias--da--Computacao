#include <stdio.h>

int main(){
	float valor[10], valor_t[10], valor_g, comissao, obj = 0;
	int quantidade[10], posicao;
	
	printf("Digite o valor unitário da peça e quantas delas foram vendidas:\n");
	for (int i = 0; i < 10; i++){
		scanf("%f %d", &valor[i], &quantidade[i]);
		
		valor_t[i] = valor[i] * quantidade[i];
		if (quantidade[i] > obj){
			obj = valor[i];
			posicao = i;
		}
	}
	valor_g = valor_t[0];
	for (int i = 1; i < 10; i++){
		valor_g += valor_t[i];
	}
	comissao = (float) valor_g * .5;
	
	printf("RELATÓRIO\n");
	for (int i = 0; i < 10; i++){
		printf("Quantidade total objeto do %d: %d;\n", i, quantidade[i]);
		printf("Valor unitário do objeto %d: %.2f;\n", i, valor[i]);
		printf("Valor total dele: %.2f;\n\n", valor_t[i]);
	}
	printf("O valor geral de vendas foi %.2f;\n\n", valor_g);
	printf("O valor da comissão do vendedor é de %.2f;\n\n", comissao);
	printf("O valor do objeto mais vendido foi o %.2f e sua posição é %d;\n", obj, posicao);
} 
