#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(); //Funcao para mostrar o menu help
int verify_print(char option[]); //Verificação de todas as opcoes
void error(int argc); //Funcao responsavel pelos erros.

int main(int argc, char *argv[]) {
	if (argc != 2) { //Verificando se a quantidade de parametros estao certas
		error(argc);
		menu();
		return 0;
	}

	int invalid_option = verify_print(argv[1]); 

	if (invalid_option) { //Verificando se a opcao foi encontrada
		printf("Invalid option, try again.\n\n");
		menu();
		printf("\n");
	}

	return 0;
}

void menu() { //Funcao para mostrar o menu help
	printf("Usage: ./bomdia [OPTION]\n");
	printf("Say good morning in different languages.\n");
	printf("\n");
	printf("Avaible arguments: \n");
	printf("--help or -h          display this help.\n");
	printf("--version or -v       display version information.\n");
	printf("--pt or -1            Say in portuguese\n");
	printf("--en or -2            Say in english\n");
	printf("--es or -3            Say in spanish\n");
	printf("--fr or -4            Say in french\n");
	printf("--it or -5            Say in italian\n");
	printf("--ru or -6            Say in russian\n");
	printf("--ko or -7            Say in korean\n");
	printf("--jp or -8            Say in japanese\n");
}
int verify_print(char option[]) { //Verificação de todas as opcoes
	if (!strcmp(option, "--help") || !strcmp(option, "-h")) { //Imprimir menu help
		menu();
		return 0;
	}
	if (!strcmp(option, "--version") || !strcmp(option, "-v")) { //Mostrar versao
		printf("BomDia (Windows\\Ubuntu\\Seila 1.0.3windows\\ubuntu\\seila) 1.0.3\n");
		printf("Copyright (C) 2022 Rener Pontes.\n");
		printf("This is a university project software.\n");
		printf("\n");
		printf("Written by Rener Pontes and no one else.\n");
		return 0;
	}

	if (!strcmp(option, "--pt") || !strcmp(option, "-1")) { //Falar em Portugues
		printf("Bom dia!\n");
		return 0;
	}
	if (!strcmp(option, "--en") || !strcmp(option, "-2")) { //Falar em Ingles
		printf("Good morning!\n");
		return 0;
	}
	if (!strcmp(option, "--es") || !strcmp(option, "-3")) { //Falar em Espanhol
		printf("Buen Día!\n");
		return 0;
	}
	if (!strcmp(option, "--fr") || !strcmp(option, "-4")) { //Falar em Frances
		printf("Bonjour!\n");
		return 0;
	}
	if (!strcmp(option, "--it") || !strcmp(option, "-5")) { //Falar em Italiano
		printf("Buongiorno!\n");
		return 0;
	}
	if (!strcmp(option, "--ru") || !strcmp(option, "-6")) { //Falar em Russo
		printf("Доброе утро!\n");
		return 0;
	}
	if (!strcmp(option, "--ko") || !strcmp(option, "-7")) { //Falar em Coreano
		printf("좋은 아침이에요!\n");
		return 0;
	}
	if (!strcmp(option, "--jp") || !strcmp(option, "-8")) { //Falar em Japones
		printf("おはよう!\n");
		return 0;
	}

	return 1; //Caso nenhum comando foi encontrado ele retorna 1
}
void error(int argc) { //Funcao responsavel pelos erros.
	if (argc == 1) //Caso esteja faltando a opcao
		printf("Options input required.\n");
	 else if (argc > 2) //Caso tenha opcoes mais que esperado
		printf("Number of options beyond what is supported.\n");
}
