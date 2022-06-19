#include <stdio.h>

int main() {
	float altura;
	
	printf("Digite sua altura aqui: \n");
	scanf("%f", &altura);
	
	if (altura < 1.5){
		printf("Baixo\n");
	}else{
		if (altura > 1.8){
			printf("Alto\n");
		}else{
			printf("Normal\n");
		}
	}
}
