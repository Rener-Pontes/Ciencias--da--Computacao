#include <stdio.h>

int main() {
	float celcius, faren;
	
	printf("Digite a temperatura que quer converter:\n");
	scanf("%f", &celcius);
	
	faren = (9 * celcius) / 5 + 32;
	
	printf("A temperetura %.2f celcius em Farenheit é %.2f", celcius, faren);
}
