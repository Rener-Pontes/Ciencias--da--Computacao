#include <stdio.h>

int main() {
	float peso, altura, ideal, diferenca;
	char genero[1];
	
	printf("Digite seu peso e sua altura, respectivamente.\n");
	scanf("%f %f", &peso, &altura);
	
	printf("Digite 'm' caso seja homem e 'f' caso seja mulher.\n");
	scanf("%s", genero);
	
	switch (genero[0]){
		case 'm':
			ideal = (72.7 * altura) - 58;
			diferenca = peso - ideal;
			
			if (diferenca < 0){
				printf("Voce precisa ganhar %.2f kg\n", diferenca * -1);
			}else if (diferenca > 0){
				printf("Voce precisa perder %.2f kg\n", diferenca);
			}else{
				printf("Você já está no peso ideal\n");
			}
			break;
		
		case 'f':
			ideal = (62.1 * altura) - 44.7;
			diferenca = peso - ideal;
			
			if (diferenca < 0){
				printf("Voce precisa ganhar %.2f kg\n", diferenca * -1);
			}else if (diferenca > 0){
				printf("Voce precisa perder %.2f kg\n", diferenca);
			}else{
				printf("Você já está no peso ideal\n");
			}
			break;
	}
}
