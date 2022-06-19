#include <stdio.h>

int main() {
	int operacao;
	float numero1, numero2;
	
	printf("Menu de operações: \n");
	printf("1- Soma\n");
	printf("2- Subtração\n");
	printf("3- Multiplicação\n");
	printf("4- Divisão\n");
	printf("Digite o numero da Operação desejada: \n");
	scanf("%d", &operacao);
	//Soma
	if (operacao == 1){
		float soma;
		
		printf("Digite os dois números que deseja somar: \n");
		scanf("%f %f", &numero1, &numero2);
		
		soma = numero1 + numero2;
		
		printf("O resultado é %.2f\n", soma);
	}else{
		//Subtração
		if (operacao == 2){
			float diferenca;
			
			printf("Digite os numeros que deseja subtrair: \n");
			scanf("%f %f", &numero1, &numero2);
			
			diferenca = numero1 - numero2;
			
			printf("O resultado é %.2f\n", diferenca);
		}else{
			//Multiplicação
			if (operacao == 3){
				float produto;
				
				printf("Digite os numeros que deseja multiplicar: \n");
				scanf("%f %f", &numero1, &numero2);
				
				produto = numero1 * numero2;
				
				printf("O resultado é %.2f\n", produto);
			}else{
				//Divisão
				if (operacao == 4){
					float divisao;
					
					printf("Digite os números que deseja dividir: \n");
					scanf("%f %f", &numero1, &numero2);
					
					divisao = numero1 / numero2;
					
					printf("O resultado é %.2f\n", divisao);
				}else{
					printf("Operação invalida, tente novamente\n");
				}
			}
		}
	}
}

