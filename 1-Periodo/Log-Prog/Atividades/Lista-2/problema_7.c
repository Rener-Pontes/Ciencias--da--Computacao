#include <stdio.h>

int main(){
	float salario, valor, prestacao, limite;
	int anos;
	
	printf("Digite o valor do seu salário: \n");
	scanf("%f", &salario);
	
	printf("Agora digite o valor da casa: \n");
	scanf("%f", &valor);
	
	printf("Digite quantos anos a pagar: \n");
	scanf("%d", &anos);
	
	prestacao = valor / (12 * anos);
	limite = salario * 0.3;
	
	if (prestacao > limite){
		printf("Empréstimo negado\n");
	}else{
		printf("Empréstimo aprovado\n");
	}
}
