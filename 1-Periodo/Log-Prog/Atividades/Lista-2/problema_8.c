#include <stdio.h>

int main() {
	float kwh, valor;
	char instalacao;
	
	printf("Coloque os kwh consumido: \n");
	scanf("%f", &kwh);
	
	printf("Digite agora o tipo de instalação: \n");
	scanf("%s", &instalacao);
	
	//residencial
	if (instalacao = 'r'){
		if (kwh <= 500){
			valor = kwh * 0.4;
			
			printf("O valor é de R$ %.2f\n", valor);
		}else{
			valor = kwh * 0.65;
			
			printf("O valor é de R$ %.2f\n", valor);
		}
	}
	
	//comercial
	if (instalacao == 'c'){
		if (kwh <= 1000){
			valor = kwh * 0.55;
			
			printf("O valor é de R$ %.2f\n", valor);
		}else{
			valor = kwh * 0.6;
			
			printf("O valor é de R$ %.2f\n", valor);
		}
	}
	
	//industrial
	if (instalacao == 'i'){
		if (kwh <= 5000){
			valor =  kwh * .55;
			
			printf("O valor é de R$ %.2f\n", valor);
		}else{
			valor = kwh * .6;
			
			printf("O valor é de R$ %.2f\n", valor);
		}
	}
}
