#include <stdio.h>

int main() {
	char operacao[3];
	int numero, repeticao, resultado;
	
	printf("===============Tabuada===============\n");
	printf("Digite o símbolo da operação desejada\n");
	printf("(+) Adição\n");
	printf("(-) Subtração\n");
	printf("(*) Multiplicação\n");
	printf("(/) Divisão\n");
	printf("Digite esc para sair\n");
	
	while (operacao[0] != 'e'){
		scanf("%s", operacao);
		
		switch (operacao[0]){
			case '+': //Adição
				numero = 1;
				while (numero <= 10){
					repeticao = 1;
					while (repeticao <= 10){
						printf("%d + %d = %d\n", repeticao, numero, numero + repeticao);
						repeticao++;
					}
					numero++;
				}
				break;
			case '-': //Subtração
				numero = 1;
				while (numero <= 10){
					repeticao = 1;
					while (repeticao <= 10){
						resultado = numero + repeticao;
						printf("%d - %d = %d\n", resultado, numero, repeticao);
						repeticao++;
					}
					numero++;
				}
				break;
			case '*': //Multiplicação
				numero = 1;
				while (numero <= 10){
					repeticao = 1;
					while (repeticao <= 10){
						printf("%d * %d = %d\n", repeticao, numero, repeticao * numero);
						repeticao++;
					}
					numero++;
				}
				break;
			case '/': //Divisão
				numero = 1;
				while (numero <= 10){
					repeticao = 1;
					while (repeticao <= 10){
						resultado = numero * repeticao;
						printf("%d / %d = %d\n", resultado, numero, repeticao);
						repeticao++;
					}
					numero++;
				}
				break;
		}
	}
	
	printf("Programa finalizado\n");
}
