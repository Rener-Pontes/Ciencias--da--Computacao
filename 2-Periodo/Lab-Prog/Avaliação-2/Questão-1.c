#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 52

typedef enum {PAUS, OUROS, COPAS, ESPADAS} t_naipe;

typedef struct {
    int valor;
    t_naipe naipe;
} t_carta;

void initialize(t_carta b[], int tam);
void shuffle(t_carta b[], int tam);

int main() {
    t_carta baralho[SIZE];
    int i, counter;

    srand(time(NULL));
    initialize(baralho, SIZE);
    shuffle(baralho, SIZE);
    for (i = 0, counter = 1; i < SIZE; i++, counter++) {
        switch (baralho[i].naipe) {
            case PAUS:
                printf("\u2663");
                break;
            case OUROS:
                printf("\u2662");
                break;
            case COPAS:
                printf("\u2661");
                break;
            case ESPADAS:
                printf("\u2660");
                break;
        }
        if (baralho[i].valor <= 10)
            printf("%02d    ", baralho[i].valor);
        else
            switch (baralho[i].valor) {
                case 11:
                    printf("J     ");
                    break;
                case 12:
                    printf("Q     ");
                    break;
                case 13:
                    printf("K     ");
                    break;
            }

        if (counter % 13 == 0) {
            printf("\n");
        }
    }

    printf("\n");
}

void initialize(t_carta b[], int tam) {
    int i, j, k = 0;

    for (i = 0; i < 4 ; i++) {
        for (j = 1; j <= 13; j++) {
            b[k].valor = j;
            b[k].naipe = i;
            k++;
        }
    }
}
void shuffle(t_carta b[], int tam) {
    int i, c1, c2;
    t_carta aux;

    for (i = 0; i < tam; i++) {
        c1 = rand() % 52;
        c2 = rand() % 52;

        aux = b[c1];
        b[c1] = b[c2];
        b[c2] = aux;

    }
}
