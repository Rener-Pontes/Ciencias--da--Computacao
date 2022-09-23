#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void initialize(int mat[][11], char name[][25]);
void sell(int mat[][11], char name[][25], int occupied[][11]);
void print(int mat[][11], int occupied[][11]);
int verify_vacancy(int mat[][11], int occupied[][11], int choice);
void list_passengers(char name[][25]);

int main() {
	//Declarando as matrizes usadas
	int poltronas[4][11] = {0},
		ocupado[4][11] = {0};
	char passageiro[44][25];
	
	initialize(poltronas, passageiro);
	while (1) {
		sell(poltronas, passageiro, ocupado);
	}
}

void initialize(int mat[][11], char name[][25]) { //Inicializa as matrizes
	int j;
	
	//Declara o valor inicial de cada linha de poltrona;
	mat[0][0] = 3;
	mat[1][0] = 4;
	mat[2][0] = 2;
	mat[3][0] = 1;
	//Completa o resto das poltronas
	for (j = 0; j < 10; j++) {
		mat[0][j + 1] = mat[0][j] + 4;
		mat[1][j + 1] = mat[1][j] + 4;
		mat[2][j + 1] = mat[2][j] + 4;
		mat[3][j + 1] = mat[3][j] + 4;
    }
	//Inicializa os nomes para algo vazio
	for(j = 0; j < 44; j++)
		strcpy(name[j], "------");
}

void sell(int mat[][11], char name[][25], int occupied[][11]) { //Processo de venda dos lugares
	int choice, i, j;
	
	//Mostra as poltronas livres
	printf("A seguir está as poltronas livres:\n");
	print(mat, occupied);
	//Lê o número do lugar comprado
	printf("\nDigite o número da poltrona que deseja: ");
	scanf(" %d", &choice);
	
	//Checa se está no intervalo
	if (choice > 44 || choice < 1)
	list_passengers(name);
	
	//Verifica se está vago
	if (verify_vacancy(mat, occupied, choice)) {
		printf("Digite o seu nome: ");
		scanf(" %s", name[choice]);
	}else
		printf("Poltrona indisponível.\n\n");
}

void print(int mat[][11], int occupied[][11]) { //Joga a matriz na tela
	int i, j;

	for (i = 0; i < 4; i++){
		for (j = 0; j < 11; j++)
			if (!occupied[i][j])
				printf("%02d  ", mat[i][j]);
			else 
				printf("%2c  ", 'X');
		if (i == 1)
			printf("\n");
		printf("\n");
	}
}

int verify_vacancy(int mat[][11], int occupied[][11], int choice) { //Verifica se aquela cadeira está vaga
	int i, j;

	for (i = 0; i < 11; i++) {
		for (j = 0; j < 11; j++) {
			if (choice == mat[i][j] && !occupied[i][j]){
				occupied[i][j] = 1;
				return 1;
			}
		}
	}
	return 0;
}

void list_passengers(char name[][25]) { //Lista todos os passageiros e os lugares
	int i;
	
	printf("\nPoltrona    Passageiro\n");
	for (i = 0; i < 44; i++)
		printf("%8d    %s\n", (i + 1), name[i]);
	exit(0);
}
