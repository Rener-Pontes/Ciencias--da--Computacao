#include <stdio.h>

int main() {
	int angulo, volta, quadrante;
	
	printf("Digite o ângulo\n");
	scanf("%d", &angulo);
	
	if (angulo < 0){
		volta = angulo / 360;
		quadrante = angulo - (volta * 360);
		
		if ((quadrante <= 0) && (quadrante > -90)){
			printf("Quarto quadrante e %d volta(s)\n", volta * -1);
		}else if ((quadrante <= -90) && (quadrante > -180)){
			printf("Terceiro quadrante e %d volta(s)\n", volta * -1);
		}else if ((quadrante <= -180) && (quadrante > -270)){
			printf("Segundo quadrante e %d volta(s)\n", volta * -1);
		}else if ((quadrante <= -270) && (quadrante > -360)){
			printf("Primeiro quadrante e %d volta(s)\n", volta * -1);
		}
	}else if (angulo >= 0){
		volta = angulo / 360;
		quadrante = angulo - (volta * 360);
		
		if ((quadrante >= 0) && (quadrante < 90)){
			printf("Primeiro quadrante e %d volta(s)\n", volta);
		}else if ((quadrante >= 90) && (quadrante < 180)){
			printf("Segundo quadrante e %d volta(s)\n", volta);
		}else if ((quadrante >= 180) && (quadrante < 270)){
			printf("Terceiro quadrante e %d volta(s)\n", volta);
		}else if ((quadrante >= 270) && (quadrante <=360)){
			printf("Quarto quadrante e %d volta(s)\n", volta);
		}
	}
}
