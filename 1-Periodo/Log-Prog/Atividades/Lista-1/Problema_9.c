#include <stdio.h>

int main() {
	int anos, quantidade, perdido;
	
	printf("Quantos cigarros você fuma por dia: \n");
	scanf("%d", &quantidade);
	
	printf("Há quantos anos você fuma: \n");
	scanf("%d", &anos);
	
	anos = anos * 365;
	perdido = (quantidade * 0.006944) * anos; //  0.006944 é 10 minutos em 1 dia
	
	printf("Você perdeu %d dias de vida", perdido);
}
