#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char nome[30];
	char curso[20];
	int numero;
	float nota_1;
	float nota_2;
	int preenchido;
}t_alunos;

void criar_arquivo();
void incluir();
void alterar_nota();
void alterar_curso();
void excluir_alunos();
void listar_todos();
void listar_aprovados();
void listar_reprovados();
void listar_exame();
void listar_curso();

int main() {
	int escolha;
	
	while (1){
		printf("Digite o numero de sua escolha:\n");
		printf("1. Criar o arquivo 'Alunos.dat'.\n");
		printf("2. Incluir um novo aluno.\n");
		printf("3. Alterar as notas dos alunos\n");
		printf("4. Alterar o curso dos alunos.\n");
		printf("5.Excluir os alunos.\n");
		printf("6. Listar todos os alunos.\n");
		printf("7. Listar os alunos que passaram por media.\n");
		printf("8. Listar os alunos que reprovaram por media.\n");
		printf("9. Listar os alunos que ficaram de exame.\n");
		printf("10. Listar os alunos de determinado curso.\n");
		scanf(" %d", &escolha);
		
		switch (escolha){
			case 1:
				criar_arquivo();
				printf("Arquivo criado.\n\n");
				break;
			case 2:
				incluir();
				printf("Aluno cadastrado.\n\n");
				break;
			case 3:
				alterar_nota();
				printf("Nota alterada.\n\n");
				break;
			case 4:
				alterar_curso();
				printf("Curso alterado.\n\n");
				break;
			case 5:
				excluir_alunos();
				printf("Alunos excluídos.\n\n");
				break;
			case 6:
				listar_todos();
				printf("\n");
				break;
			case 7:
				listar_aprovados();
				printf("\n");
				break;
			case 8:
				listar_reprovados();
				printf("\n");
				break;
			case 9:
				listar_exame();
				printf("\n");
				break;
			case 10:
				listar_curso();
				printf("\n");
		}
	}
}

void criar_arquivo () {
	FILE *arquivo = fopen("alunos.dat", "wb");
	fclose(arquivo);
}
void incluir () {
	FILE *arquivo = fopen("alunos.dat", "ab");
	t_alunos alunos;
	
	if (arquivo == NULL){
		printf("Erro na tentativa de ler o arquivo.\n");
		exit(1);
	}
	
	printf("Digite o nome o aluno: ");
	scanf(" %[^\n]", alunos.nome);
	
	printf("Digite o curso do aluno: ");
	scanf(" %[^\n]", alunos.curso);
	
	printf("Digite o numero do aluno: ");
	scanf(" %d", &alunos.numero);
	 
	printf("Digite as duas notas do aluno: ");
	scanf(" %f %f", &alunos.nota_1, &alunos.nota_2);
	
	alunos.preenchido = 1;
	fwrite(&alunos, sizeof(t_alunos), 1, arquivo);
	fclose(arquivo);
}
void alterar_nota () {
	FILE *arquivo = fopen("alunos.dat", "rb+");
	t_alunos alunos;
	
	if (arquivo == NULL){
		printf("Erro na tentativa de ler o arquivo.\n");
		exit(1);
	}
	
	int cont = 0;
	
	while (1){
		fseek(arquivo, cont * sizeof(t_alunos), SEEK_SET);
		fread(&alunos, sizeof(t_alunos), 1, arquivo);
		if (feof(arquivo))
			break;
		if (alunos.preenchido){
			printf("Digite a nova nota 1: ");
			scanf(" %f", &alunos.nota_1);
			printf("Digite a nova nota 2: ");
			scanf(" %f", &alunos.nota_2);
			
			fseek(arquivo, cont * sizeof(t_alunos), SEEK_SET);
			fwrite(&alunos, sizeof(t_alunos), 1, arquivo);
		}
		cont++;
	}
	fclose(arquivo);
}
void alterar_curso () {
	FILE *arquivo = fopen("alunos.dat", "rb+");
	t_alunos alunos;
	
	if (arquivo == NULL){
		printf("Erro na tentativa de ler o arquivo.\n");
		exit(1);
	}
	
	int cont = 0;
	
	while (1){
		fseek(arquivo, cont * sizeof(t_alunos), SEEK_SET);
		fread(&alunos, sizeof(t_alunos), 1, arquivo);
		if (feof(arquivo))
			break;
		if (alunos.preenchido){
			printf("Digite o novo curso: ");
			scanf(" %[^\n]", alunos.curso);
			
			fseek(arquivo, cont * sizeof(t_alunos), SEEK_SET);
			fwrite(&alunos, sizeof(t_alunos), 1, arquivo);
		}
		cont++;
	}
	fclose(arquivo);
}
void excluir_alunos () {
	FILE *arquivo = fopen("alunos.dat", "rb+");
	t_alunos alunos;
	
	if (arquivo == NULL){
		printf("Erro na tentativa de ler o arquivo.\n");
		exit(1);
	}
	
	int cont = 0;
	
	while (1){
		fseek(arquivo, cont * sizeof(t_alunos), SEEK_SET);
		fread(&alunos, sizeof(t_alunos), 1, arquivo);
		if (feof(arquivo))
			break;
		alunos.preenchido = 0;
		fseek(arquivo, cont * sizeof(t_alunos), SEEK_SET);
		fwrite(&alunos, sizeof(t_alunos), 1, arquivo);
		cont++;
	}
	fclose(arquivo);
}
void listar_todos () {
	FILE *arquivo = fopen("alunos.dat", "rb");
	t_alunos alunos;
	
	if (arquivo == NULL){
		printf("Erro na tentativa de ler o arquivo.\n");
		exit(1);
	}
	while (1){
		fread(&alunos, sizeof(t_alunos), 1, arquivo);
		if (feof(arquivo))
			break;
		if (alunos.preenchido){
			float media = ((float) alunos.nota_1 + alunos.nota_2) / 2;
			printf("O aluno %s, está no curso %s, é o numero %d e tem a media %.2f\n\n", alunos.nome, alunos.curso, alunos.numero, media);
		}
	}
	fclose(arquivo);
}
void listar_aprovados () {
	FILE *arquivo = fopen("alunos.dat", "rb");
	t_alunos alunos;
	
	if (arquivo == NULL){
		printf("Erro na tentativa de ler o arquivo.\n");
		exit(1);
	}
	while (1){
		fread(&alunos, sizeof(t_alunos), 1, arquivo);
		float media = ((float) alunos.nota_1 + alunos.nota_2) / 2;
		if (feof(arquivo))
			break;
		if (alunos.preenchido && media >= 7.0)
			printf("O aluno %s, está no curso %s, é o numero %d e tem a media %.2f\n\n", alunos.nome, alunos.curso, alunos.numero, media);
	}
	fclose(arquivo);
}
void listar_reprovados () {
	FILE *arquivo = fopen("alunos.dat", "rb");
	t_alunos alunos;
	
	if (arquivo == NULL){
		printf("Erro na tentativa de ler o arquivo.\n");
		exit(1);
	}
	while (1){
		fread(&arquivo, sizeof(t_alunos), 1, arquivo);
		if (feof(arquivo))
			break;
		float media = ((float) alunos.nota_1 + alunos.nota_2) / 2;
		if (alunos.preenchido && media < 3)
			printf("O aluno %s, está no curso %s, é o numero %d e tem a media %.2f\n\n", alunos.nome, alunos.curso, alunos.numero, media);
	}
	fclose(arquivo);
}
void listar_exame () {
	FILE *arquivo = fopen("alunos.dat", "rb");
	t_alunos alunos;
	
	if (arquivo == NULL){
		printf("Erro na tentativa de ler o arquivo.\n");
		exit(1);
	}
	while (1){
		fread(&alunos, sizeof(t_alunos), 1, arquivo);
		if (feof(arquivo))
			break;
		float media = ((float) alunos.nota_1 + alunos.nota_2) / 2;
		if (alunos.preenchido && ((media >= 3.0) && (media < 7.0)))
			printf("O aluno %s, está no curso %s, é o numero %d e tem a media %.2f\n\n", alunos.nome, alunos.curso, alunos.numero, media);
	}
	fclose(arquivo);
}
void listar_curso () {
	FILE *arquivo = fopen("alunos.dat", "rb");
	t_alunos alunos;
	char nome[20];
	
	if (arquivo == NULL){
		printf("Erro na tentativa de ler o arquivo.\n");
		exit(1);
	}
	
	printf("Digite o Curso que deseja pesquisar: ");
	scanf(" %[^\n]", nome);
	
	while (1){
		fread(&alunos, sizeof(t_alunos), 1, arquivo);
		if (feof(arquivo))
			break;
		if (alunos.preenchido && !strcmp(nome, alunos.curso))
			printf("%s\n", alunos.nome);
	}
	fclose(arquivo);
}
