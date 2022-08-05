#include <stdio.h>

float media (float n1, float n2, float n3, char l[]){
	float m;
	if (l[0] == 'A')
		m = (n1 + n2 + n3) / 3;
	if (l[0] == 'P')
		m = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
	return m;
}

int main() {
	float n1, n2, n3;
	char letra[1];
	
	printf("Digite as 3 notas\n");
	scanf("%f %f %f", &n1, &n2, &n3);
	printf("Digite A para media aritmetica ou P para ponderada\n");
	scanf("%s", letra);
	
	printf("Sua media e %.2f\n", media(n1, n2, n3, letra));
}
