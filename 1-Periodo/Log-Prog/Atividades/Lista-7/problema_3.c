#include <stdio.h>

float p_acrescimo (float v1, float v2){
	float acrescimo;
	acrescimo = (v2 / v1) * 100;
	return acrescimo;
}

int main() {
	float v_antes, v_depois;
	
	printf("Digite os dois valores que deseja ver o acrescimo\n");
	scanf("%f %f", &v_antes, &v_depois);
	
	printf("O acrescimo foi de %.2f%%\n", p_acrescimo(v_antes, v_depois));
}
