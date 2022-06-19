#include <stdio.h>

int main() {
	char nome1[50], nome2[50], nome3[50];
	float altura1, altura2, altura3, peso1, peso2, peso3, imc;
	
	printf("Digite o nome das 3 pessoas em ordem: \n");
	scanf("%s %s %s", nome1, nome2, nome3);
	
	printf("Digite a altura respectivamente de cada: \n");
	scanf("%f %f %f", &altura1, &altura2, &altura3);
	
	printf("Digite o peso respectivamente de cada: \n");
	scanf("%f %f %f", &peso1, &peso2, &peso3);
	
	imc = peso1 / (altura1 * altura1);
	
	printf("%s tem indice de massa corporal equivalente há %f.3\n", nome1, imc);
	
	imc = peso2 / (altura2 * altura2);
	
	printf("%s tem indice de massa corporal equivalente há %.3f\n", nome2, imc);
	
	imc = peso3 / (altura3 * altura3);
	
	printf("%s tem indice de massa corporal equivalente há %.3f\n", nome3, imc);
}
