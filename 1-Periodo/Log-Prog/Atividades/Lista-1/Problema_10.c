#include <stdio.h> 

int main() {
	int idade1, idade2, idade3, media;
	
	printf("Digite a idade 1: \n");
	scanf("%d", &idade1);
	
	printf("Digite a idade 2: \n");
	scanf("%d", &idade2);
	
	printf("Digite a idade 3: \n");
	scanf("%d", &idade3);
	
	media = (idade1 + idade2 + idade3)/3;
	
	printf("A média é %d", media);
}
