#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char passwd[8] = {' '};
	int i, choice;

	srand(time(NULL));
	for(i = 0; i < 8; i++) {
		//Escolhe o tipo de caractere vai ocupar a posição
		choice = rand() % 3; //
		//Gera o caractere aleatório
		switch (choice) {
			case 0: //Gera número
				passwd[i] = (rand() % 10) + 48;
				break;
			case 1: //Gera letra minúscula
				passwd[i] = (rand() % 26) + 97;
				break;
			case 2: //Gera letra maiúscula
				passwd[i] = (rand() % 26) + 65;
				break;
		}
	}
	
	printf("Senha: %s\n", passwd);
}
