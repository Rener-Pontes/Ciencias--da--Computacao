#include <stdio.h>

int main() {
	float salario, aumento;
	
	printf("Digite o seu salário: \n");
	scanf("%f", &salario);
	
	if (salario > 1250){
		aumento = salario + (salario * 0.1);
		
		printf("Seu novo salario é R$ %.2f\n", aumento);
	}else{
		aumento = salario + (salario * 0.15);
		
		printf("Seu novo salario é R$ %.2f\n", aumento);
	}
}
