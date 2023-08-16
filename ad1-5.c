#include <stdio.h>

// dados v1 e v2 retornar v3 com os valores de v1 que não estão em v2

int main () {
	int v1[5] = {1, 3, 5, 8, 12};
	int v2[7] = {1, 2, 4, 9};
	int v3[5] = {0, 0, 0, 0, 0};
	int i1 = 0;
	int i2 = 0;
	int i3 = 0;

	for (i1; i1 < 5; i1++) {
		while (i2 < 7 && v2[i2] < v1[i1]) {
			i2 = i2 + 1;
		}
		if (v2[i2] == v1[i1]) {
			i2 = i2 + 1;	
		} else {
			v3[i3] = v1[i1];
			i3 = i3 + 1;
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", v3[i]);
	}

	printf("\n");

	return 0;
}