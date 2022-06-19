#include <stdio.h>

int main() {
	float km, vel_media, tempo;
	
	printf("Digite a distancia, em quilômetros, que será percorrida:\n");
	scanf("%f", &km);
	
	printf("Digite a Velocidade Média esperada:\n");
	scanf("%f", &vel_media);
	
	tempo =  km / vel_media;
	
	printf("O tempo esperado é de %.2f horas", tempo);
}
