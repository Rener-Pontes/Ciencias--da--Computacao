#include <stdio.h>

typedef struct {
    int numero;
    char cod_o[3];
    char cod_d[3];
    int hora;
    int minuto;
    int total;
} t_voo;

void bubble_sort(t_voo v[], int tam);

int main() {
    t_voo v[300];
    int i;

    for (i = 0; i < 300; i++) {
        scanf("%d %s %s %d:%d%*c", &v[i].numero, v[i].cod_o, v[i].cod_d, &v[i].hora, &v[i].minuto);

        v[i].total = v[i].hora * 60 + v[i].minuto;
    }
    bubble_sort(v, 300);
    for (i = 0; i < 300; i++) {
        printf("%d %s %s %d:%dh\n", v[i].numero, v[i].cod_o, v[i].cod_d, v[i].hora, v[i].minuto);
    }
}

void bubble_sort(t_voo v[], int tam) {
    int i, j;
    t_voo aux;

    for (i = 0; i < tam - 1; i++) {
        for (j = 0; j < tam - 1 - i; j++) {
            if (v[j].total > v[j+1].total) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}
