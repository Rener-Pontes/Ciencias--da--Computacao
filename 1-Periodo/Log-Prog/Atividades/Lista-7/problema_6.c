#include <stdio.h>

void mai_men(int a, int b, int c){
	//Para descobrir o maior
	if ((a > b) && (a > c))
		printf("O maior e %d\n", a);
	else if ((b > a) && (b > c))
		printf("O maior e %d\n", b);
	else
		printf("O maior e %d\n", c);
	//Para descobrir o menor
	if ((a < b) && (a < c))
		printf("O menor e %d\n", a);
	else if ((b < a) && (b < c))
		printf("O menor e %d\n", b);
	else
		printf("O menor e %d\n", c);
}

int main() {
	int a, b, c;
	
	printf("Digite 3 numeros\n");
	scanf("%d %d %d", &a, &b, &c);
	mai_men(a, b, c);
}
