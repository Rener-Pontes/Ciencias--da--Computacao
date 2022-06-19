#include <stdio.h>

int main() {
	int n1, n2, n3;
	
	printf("Digite 3 números: \n");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	//Maior numero
	if ((n1 > n2) && (n1 > n3)){
		printf("O maior número é %d\n", n1);
	}
	if ((n2 > n1) && (n2 > n3)){
		printf("O maior número é %d\n", n2);
	}
	if ((n3 > n1) && (n3 > n2)){
		printf("O maior número é %d\n", n3);
	}
	
	//Menor numero
	if ((n1 < n2) && (n1 < n3)){
		printf("O menor número é %d\n", n1);
	}
	if ((n2 < n1) && (n2 < n3)){
		printf("O menor número é %d\n", n2);
	}
	if ((n3 < n1) && (n3 < n2)){
		printf("O menor número é %d\n", n3);
	}
	}
