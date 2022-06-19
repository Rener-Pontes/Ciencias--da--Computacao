#include <stdio.h>

int main() {
	int horas_trab, dependentes, horas_extras;
	float salario_min, valor_hora, salario_mes, salario_bruto;
	
	printf("Digite o salario minimo: \n");
	scanf("%f", &salario_min);
	
	printf("Digite as horas trabalhadas: \n");
	scanf("%d", &horas_trab);
	
	printf("Quantas pessoas dependem de você?\n");
	scanf("%d", &dependentes);
	
	printf("Quantas horas extras trabalhou?\n");
	scanf("%d", &horas_extras);
	
	valor_hora = salario_min / 5;
	salario_mes = valor_hora * horas_trab;
	dependentes = dependentes * 32;
	horas_extras = valor_hora + (valor_hora * 0.5);
	salario_bruto = salario_mes + dependentes + horas_extras;
	
	printf("Seu salário é R$ %.2f\n", salario_bruto);
}
