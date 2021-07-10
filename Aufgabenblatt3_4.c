#include <stdio.h>

void main() {
	int arr[5];
	int zahl;
	int largest = 0;
	for (int i = 0;i < 5;i++) {
		printf("Bitte die %d. Zahl eingeben: ", i+1);
		scanf(" %d", &zahl);
		arr[i] = zahl;
		if (i > 0) {
			if (largest - arr[i] < 0) {
				largest = arr[i];
			}
		}
		else {
			largest = arr[i];
		}
	}
	printf("\nDie groesste Zahl ist: %d\n", largest);
}