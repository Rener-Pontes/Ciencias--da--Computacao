//Escreva um programa que leia a quantidade de dias, horas, minutos e segundos do usuário. Calcule o total em segundos

#include <stdio.h>

int main() {
	int dia, hora, minuto, segundo;
	
	printf("Digite os dias, horas, minutos e segundos, nesta ordem\n");
	scanf("%d %d %d %d", &dia, &hora, &minuto, &segundo);
	
	hora = hora + (dia * 24);
	minuto = minuto + (hora * 60);
	segundo = segundo + (minuto * 60);
	
	printf("O total em segundos é %d\n", segundos);
}
