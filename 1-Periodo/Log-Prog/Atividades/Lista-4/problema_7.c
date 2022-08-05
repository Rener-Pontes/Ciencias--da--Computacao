#include <stdio.h>

int main() {
	int quantidade;
	int repeticao = 1;
	int mulheres = 0;
	int homens = 0;
	float altura, media, percentual_m, percentual_f, diferenca;
	char sexo;
	
	printf("Digite quantas pessoas serão entrevistadas\n");
	scanf("%d", &quantidade);
	
	while (repeticao <= quantidade){
		printf("Digite a altura da pessoa e m se for masculino ou f se for feminino.\n");
		scanf("%f %c", &altura, &sexo);
		
		switch (sexo){
			case 'm':
				homens += 1;
				break;
			case 'f':
				media += altura;
				mulheres += 1;
				break;
		}
		repeticao++;
	}
	
	media = media / mulheres;
	percentual_m = (homens * 100 ) / quantidade;
	percentual_f = (mulheres * 100) / quantidade;
	diferenca = percentual_m - percentual_f;
	
	if(diferenca < 0){
		diferenca = diferenca * -1;
	}
	
	printf("A altura média entre as mulheres é %.2f\n", media);
	printf("O numero de homens é %d\n", homens);
	printf("O percentual de homens é de %.2f%% do total, e a diferença percentual entres os sexos é de %.2f%%", percentual_m, diferenca);
}
