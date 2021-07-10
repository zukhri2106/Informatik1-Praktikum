#include <stdio.h>

void main() {
	int n;
	int stellen = 0;
	int arr[16];
	int result;
	printf("Bitte eine ganze Zahl eingeben,\n"
	"die in eine Binaerzahl umgewandelt werden soll: ");
	scanf("%d", &n);
	result = n;
	while (result != 0) {
		result = result / 2;
		stellen++;
	}
	if (stellen > 16) {
		printf("\ndie Binaerzahl von %d hat %d Stellen,\n"
			"die Umwandlung in eine 16-bit Binaerzahl ist nicht moeglich.\n", n, stellen);
	}
	else {
		printf("\ndie Binaerzahl von %d hat %d Stellen,\n"
			"die Umwandlung in eine 16-bit Binaerzahl ist moeglich.\n\n", n, stellen);

		result = n;
		for (int i = 0;i < 16;i++) {
			arr[i] = result % 2;
			result = result / 2;
		}
		printf("Die Binaerzahl von %d lautet ", n);
		for (int i = sizeof(arr) / sizeof(int) - 1;i >= 0;i--) {
			if ((i + 1) % 4 == 0) {
				printf(" ");
			}
			printf("%d", arr[i]);
		}
	}

	printf("\n");
}