#include <stdio.h>

int main() {
	float km, dias, preco;
	
	printf("Digite quantos quilometros foi radado: \n");
	scanf("%f", &km);
	
	printf("Digite quantos dias ficou com o veículo: \n");
	scanf("%f", &dias);
	
	preco = dias * 60 + km * 0.15;
	
	printf("O total a ser pago é R$ %.2f", preco);
}
