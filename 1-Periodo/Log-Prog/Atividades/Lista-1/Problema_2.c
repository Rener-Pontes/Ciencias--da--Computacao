//Escreva um valor que lê um valor em metros e exiba convertido em milímetros.

#include <stdio.h>

int main(){
    int metros;
    
    printf("Digite o valor, em metros, que deseja transformar: ");
    scanf("%d", &metros);
    printf("%d milimetros", metros * 1000);
}
