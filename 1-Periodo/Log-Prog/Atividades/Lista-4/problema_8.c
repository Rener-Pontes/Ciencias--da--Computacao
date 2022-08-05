#include <stdio.h>

int main(){
  double e, fatorial;
  int repeticao, diferenca, numero;

  printf("Digite um número inteiro positivo:\n");
  scanf("%d", &numero);

  e = 1.0;
  for(repeticao = 1; repeticao <= numero; repeticao++){
    fatorial = 1.0;
    for(diferenca = 2; diferenca <= repeticao; diferenca++)
      fatorial = fatorial * diferenca;
    e = e + (1.0 / fatorial);
  }
  printf("O valor de E = %.5lf\n", e);
}
