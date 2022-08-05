#include <stdio.h>

int soma (int a, int b, int c){
	int somatorio = 0, i;
	if (b < c){
		for (i = b + 1; i < c; i++)
			if (i % a == 0)
				somatorio += i;
	}else if (c < b){
		for (i = c + 1; i < b; i++)
			if (i % a == 0)
				somatorio += i;
	}else
		somatorio = 0;
	return somatorio;
}

int main() {
	int a, b, c;
	
	printf("Digite 3 numeros\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("A soma dos numeros inteiros entre B e C diviśıveis por A e %d\n", soma(a, b, c));
}
