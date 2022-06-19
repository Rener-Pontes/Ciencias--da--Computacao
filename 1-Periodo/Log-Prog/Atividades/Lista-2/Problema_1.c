#include <stdio.h>

int main() {
	int num1, num2, maior;
	
	printf("Digite dois numeros inteiros\n");
	scanf("%d %d", &num1, &num2);
	
	if (num1 > num2)
		maior = num1;
	else
		maior = num2;
	
	printf("%d é o maior\n");
}
