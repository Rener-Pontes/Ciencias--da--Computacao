#include <stdio.h> 

int main() {
	int idade_1, idade_2, idade_3, media;
	
	printf("Digite a idade 1: \n");
	scanf("%d", &idade_1);
	
	printf("Digite a idade 2: \n");
	scanf("%d", &idade_2);
	
	printf("Digite a idade 3: \n");
	scanf("%d", &idade_3);
	
	media = (idade_1 + idade_2 + idade_3)/3;
	
	printf("A média é %d", media);
}
