//Faça um programa que peça dois números inteiros, imprima a soma desses dois números na tela

#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Digite dois números inteiros:\n");
    scanf("%d %d", &num1, &num2);
    printf("Soma: %d\n", num1 + num2);
}
