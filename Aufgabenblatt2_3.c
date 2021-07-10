#include <stdio.h>

void main() {
	int jahr;
	printf("Bitte die Jahrezahl eingeben: ");
	scanf("%d", &jahr);
	if (jahr % 4 == 0 || (jahr % 4 == 0 && jahr % 100 == 0 && jahr % 400 == 0)) {
		printf("Das Jahr %d ist ein SchaltJahr.\n", jahr);
	}
	else {
		printf("Das Jahr %d ist kein SchaltJahr.\n", jahr);
	}
}