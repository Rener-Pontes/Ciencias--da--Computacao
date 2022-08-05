#include <stdio.h>

void tempo (int x){
	int segundo, minuto, hora;
	
	hora = x / 3600;
	minuto = (x / 60) - (hora * 60);
	segundo = x - (minuto * 60) - (hora * 3600);
	
	printf("%d horas, %d minutos, %d segundos\n", hora, minuto, segundo);
}

int main() {
	int s;
	
	printf("Digite a quantidade de segundos que deseja transformar: ");
	scanf("%d", &s);
	
	tempo(s);
}
