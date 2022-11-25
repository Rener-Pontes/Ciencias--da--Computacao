#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


#define MAX_WORD_LEN 50
#define TOTAL_WORDS_AMOUNT 38
#define ALPHABET_LEN 26


const int MEMBER_AMOUNT = 6;

typedef enum {NOT_FOUND, FOUND} te_state;


int rounds = 0;


typedef struct {
	int len;
	int hits;
	char secret_word[MAX_WORD_LEN];
	char hidden_letters[MAX_WORD_LEN];
} ts_guess;


void game();
ts_guess initialize(char *input_map);
void select_secret(char *secret);
void hide_letters(int length, char *underscored_word);
char read_input();
te_state check_existance(char *source, char letter_to_find);
void reveal_letters(ts_guess *word, char *input_map, char input);
void validate_use(char *input_map, char letter);


int main() {
	game();
}


void game() {
	int attempts = 0;
	char input_letter, input_map[ALPHABET_LEN];
	ts_guess word = initialize(input_map);

	while (attempts < MEMBER_AMOUNT && word.hits < word.len) {
		printf("%s\n", word.secret_word);
		for (int i = 0; i < strlen(input_map); i++)
			printf("%c, ", input_map[i]);
		printf("\n");
		printf("%s\n", word.hidden_letters);

		input_letter = read_input();

		if(check_existance(word.secret_word, input_letter)) {
			reveal_letters(&word, input_map, input_letter);

			if (word.hits == word.len)
				return;
		} else attempts++;

		rounds++;
	}

	printf("You lose.\n");
}

ts_guess initialize(char *input_map) {
	ts_guess word;
	char empty_string[] = {'\0'};

	select_secret(word.secret_word);
	word.len = strlen(word.secret_word);
	hide_letters(word.len, word.hidden_letters);
	word.hits = 0;
	strcpy(input_map, empty_string);

	return word;
}

void select_secret(char *secret) {
	srand(time(NULL));

	int position = rand() % TOTAL_WORDS_AMOUNT;
	char *word_bank[TOTAL_WORDS_AMOUNT] = {"banana", "falar", "dias", "pessoas",
										   "garganta", "jogos", "cuidado", "filme",
										   "defeito", "imagem", "perfeita", "erros",
										   "reconhecer", "polimento", "impressionante",
										   "diferente", "acontece", "ontem", "produto",
										   "procurar", "piada", "saturar", "gosto",
										   "caramba", "careca", "idade", "kuririn", 
										   "historia", "maior", "legal", "personagens",
										   "certeza", "dublado", "prestigio", "efeito",
										   "alex", "palavra", "paralelepipedo"};

	strcpy(secret, word_bank[position]);
}

void hide_letters(int length, char *underscored_word) {
	int i;
	char underscore = '_';

	for (i = 0; i < length; i++)
		underscored_word[i] = underscore;
}

char read_input() {
	char *letter;

	scanf(" %s", letter);

	letter[0] = tolower(letter[0]);
	return letter[0];
}

te_state check_existance(char *source, char letter_to_find) {
	char *is_found = strchr(source, letter_to_find);

	return is_found != NULL;
}

void reveal_letters(ts_guess *word, char *input_map, char input) {
	int i;

	if (check_existance(input_map, input) == NOT_FOUND) {	
		validate_use(input_map, input);
		for (i = 0; i < word->len; i++)
			if (word->secret_word[i] == input) {
					word->hidden_letters[i] = input;
					word->hits++;
				}
	}
	
}

void validate_use(char *input_map, char letter) {
	char terminal_char = '\0';

	input_map[rounds] = letter;
	input_map[rounds+1] = terminal_char;
}
