#include <stdio.h>

void main() {
	int n;
	printf("Bitte geben Sie eine ganze positive Zahl ein: ");
	scanf("%d", &n);
	printf("Die Teiler lauten: ");
	for (int i = 1;i <= n;i++) {
		if (n % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
}