#include <stdio.h>

int main() {
	 int raio;
	 float comprimento, area, volume;
	 
	 printf("Digite o raio da circunferência: \n");
	 scanf("%d", &raio);
	 
	 comprimento = 2 * raio * 3.14;
	 area = raio * raio * 3.14;
	 volume = (3 * 3.14 * raio * raio * raio) / 4;
	 
	 printf("O circulo de raio %d, tem comprimento %.2f, area %.2f e volume %.2f", raio, comprimento, area, volume);
}
