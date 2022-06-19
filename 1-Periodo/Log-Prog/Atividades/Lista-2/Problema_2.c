#include <stdio.h>

int main() {
	int n1, n2, n3, n4;
	
	printf("Digite 3 números em ordem CRESCENTE e um quarto número qualquer\n");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	if (n4 >= n3){
		printf("%d %d %d %d\n", n4, n3, n2, n1);
	}else{
		if (n4 >= n2){
			printf("%d %d %d %d\n", n3, n4, n2, n1);
		}else{
			if (n4 >= n1){
				printf("%d %d %d %d\n", n3, n2, n4, n1);
			}else{
				printf("%d %d %d %d\n", n3, n2, n1, n4);
			}
		}
	}
}
