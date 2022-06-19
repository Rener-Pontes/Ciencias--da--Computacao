/*Faça um programa que calcule o aumento de um salario. Ele deve solicitar o valor do
salário e a porcentagem do aumento. Exiba o valor do aumento e do novo salario*/

#include <stdio.h>

int main() { 
	float salario, aumento, porcentagem;
	
	printf("Digite o seu salario: ");
	scanf("%f", &salario);
	printf("Digite a porcentagem do aumento:\n");
	printf(":. Inserir conforme exemplo: 55%% -> 0.55\n");
	scanf("%f", &porcentagem);
	
	aumento = salario * porcentagem;
	salario = salario + aumento;
	
	printf("Seu salário teve aumento de R$ %.2f e ficou R$ %.2f\n", aumento, salario);
}
