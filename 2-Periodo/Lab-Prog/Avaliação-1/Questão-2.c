#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10

int ordenado(int vec[], int size);

int main() {
	int vec[LEN] = {0},
		i, result;

	printf("Digite 10 números quaisquer.\n");
	for (i = 0; i < LEN; i++)
		scanf(" %d", &vec[i]);

	result = ordenado(vec, LEN);

	printf("%d\n", result);
}

int ordenado(int vec[], int size) {
	int increase = 0,
		decrease = 0,
		i;

	for (i = 0; i < size; i++){
		if (vec[i] <= vec[i + 1]) {
			increase++;
			continue;
        }
		if (vec[i] >= vec[i + 1]) {
			decrease++;
			continue;
		}
	}

	if (increase == size - 1)
		return -1;
	if (decrease == size - 1)
		return 1;
	return 0;
}
