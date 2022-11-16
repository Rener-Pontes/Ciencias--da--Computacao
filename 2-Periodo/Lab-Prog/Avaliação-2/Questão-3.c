#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned int p1:8;
    unsigned int p2:8;
    unsigned int p3:8;
    unsigned int p4:8;
} t_ip;

void initialize(t_ip v[], int tam);

int main() {
    printf("O tamanho da estrutura é %ld.\n\n", sizeof(t_ip));

    t_ip vetor[30];
    int i;

    initialize(vetor, 30);
    for (i = 0; i < 30; i++) {
        printf("%d.%d.%d.%d\n", vetor[i].p1, vetor[i].p2, vetor[i].p3, vetor[i].p4);
    }

}

void initialize(t_ip v[], int tam) {
    int i;

    for (i = 0; i < tam; i++) {
        v[i].p1 = rand() % 256;
        v[i].p2 = rand() % 256;
        v[i].p3 = rand() % 256;
        v[i].p4 = rand() % 256;
    }
}
