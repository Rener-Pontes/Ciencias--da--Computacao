#include <stdio.h>

int media_i (char o[], char c[], int id[]){
	int i, soma = 0, cont = 0;
	for (i = 0; i < 5; i++)
		if ((o[i] == 'C') && (c[i] == 'P')){
			soma += id[i];
			cont++;
		}
	return soma / cont;
}
int maior_i (int id[]){
	int i, maior = id[0];
	for (i = 0; i < 5; i++)
		if (id[i] > maior)
			maior = id[i];
	return maior;
}
int quant (char o[], char c[], char s[], int id[]){
	int quantidade = 0, i;
	
	for (i = 0; i < 5; i++)
		if (((id[i] >= 18) && (id[i] <= 35)) && (o[i] == 'A') && (c[i] = 'L') && (s[i] == 'M'))
			quantidade++;
	return quantidade;
}

int main(){
	char olho[5], cabelo[5], sexo[5];
	int idade[5], i;
	
	for (i = 0; i < 5; i++){
		printf("Digite a letra correspodente pro seu caso\n");
		printf("Digite A para olho AZUL e C para CASTANHO\n");
		printf("Digite P para cabelo PRETO e L para Louro\n");
		printf("Digite H se for HOMEM e M se for MULHER\n");
		printf("Digite sua IDADE\n");
		scanf("%c %c %c %d", &olho[i], &cabelo[i], &sexo[i], &idade[i]);
	}
	
		printf("A idade media das pessoas com olhos castanhos e pretos e %d\n", media_i(olho, cabelo, idade));
		printf("A maior idade dos habitantes e %d\n", maior_i(idade));
		printf("A quantidade de mulheres de 18 a 35 anos, loiras e de olhos azuis e %d\n", quant(olho, cabelo, sexo, idade));
}

