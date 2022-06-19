#include <stdio.h>

int main() {
	int codigo;
	float salario, aumento, novosal;
	
	printf("Digite o codigo correspondente ao seu cargo\n");
	printf("1 - Escrituário\n");
	printf("2 - Secretário\n");
	printf("3 - Caixa\n");
	printf("4 - Gerente\n");
	printf("5 - Diretor\n");
	scanf("%d", &codigo);
	
	printf("Digite o seu salário: \n");
	scanf("%f", &salario);
	
	//Escrituário
	if (codigo == 1){
		aumento = salario * 0.5;
		novosal = aumento + salario;
		
		printf("O seu aumento é de R$ %.2f e seu novo salário é R$ %.2f", aumento, novosal);
	}
	
	//Secretário
	if (codigo == 2){
		aumento = salario * 0.35;
		novosal = aumento + salario;
		
		printf("O seu aumento é de R$ %.2f e seu novo salário é R$ %.2f", aumento, novosal);
	}
	
	//Caixa
	if (codigo == 3){
		aumento = salario * 0.2;
		novosal = aumento + salario;
		
		printf("O seu aumento é de R$ %.2f e seu novo salário é R$ %.2f", aumento, novosal);
	}
	
	//Gerente
	if (codigo == 4){
		aumento = salario * 0.1;
		novosal = aumento + salario;
		
		printf("O seu aumento é de R$ %.2f e seu novo salário é R$ %.2f", aumento, novosal);
	}
	
	//Diretor
	if (codigo == 5){
		printf("O seu salário não teve aumento, continua sendo o mesmo");
	}
}
