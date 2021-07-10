#include <stdio.h>

void main() {
	int n1, n2;
	printf("Bitte die erste Zahl eingeben:\n");
	scanf_s("%d", &n1);
	printf("Bitte die zweite Zahl eingeben:\n");
	scanf_s("%d", &n2);

	if (n1 > n2) {
		printf("Die erste Zahl ist groesser als die zweiter Zahl\n");
	}
	else if (n1 < n2) {
		printf("Die erste Zahl ist kleiner als die zweiter Zahl\n");
	}
	else {
		printf("Die erste Zahl ist gleich als die zweiter Zahl\n");
	}
}