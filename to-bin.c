#include <stdio.h>

void paraBin(int decimal) {
	if (decimal > 0) {
		paraBin(decimal/2);
		printf("%d", decimal % 2);
	}
}

int main() {
	int num;
	scanf("%d", &num);
	paraBin(num);
	return 1;
}