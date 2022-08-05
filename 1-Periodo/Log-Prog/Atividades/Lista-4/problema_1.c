#include <stdio.h>

int main() {
	int codigo, quantidade;
	float preco = 0;
	
	printf("Digite o código do produto e a quantidade\n");
	scanf("%d %d", &codigo, &quantidade);
	
	while (codigo != 0){
		if (codigo != 0){
			switch (codigo){
				case 1:
					preco = preco + (quantidade * 0.5);
					break;
				case 2:
					preco = preco + quantidade;
					break;
				case 3:
					preco = preco + (quantidade * 4);
					break;
				case 5:
					preco = preco + (quantidade * 7);
					break;
				case 9:
					preco = preco + (quantidade * 8);
					break;
				default:
					printf("Opção inválida\n");
			}
			
			printf("Digite o código do produto e a quantidade\n");
			printf("Caso não possua, digite 0\n");
			scanf("%d %d", &codigo, &quantidade);
		}
	}
	
	printf("O preco é %.2f reais\n", preco);
}
