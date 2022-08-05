#include <stdio.h>

int main() {
	int nivel, horas;
	float pagamento;
	
	printf("Digite o seu nivel e a quantidade de horas trabalhadas respectivamente: \n");
	scanf("%d %d", &nivel, &horas);
	
	switch (nivel){
		case 1:
			pagamento = horas * 12;
			break;
			
		case 2:
			pagamento = horas * 17;
			break;
		
		case 3:
			pagamento = horas * 25;
			break;
			
		default:
			printf("Nivel Invalido.\n");
	}
	
	printf("O seu pagamento é R$ %.2f\n", pagamento);
}
