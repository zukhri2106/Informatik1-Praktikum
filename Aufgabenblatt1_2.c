#include <stdio.h>

void main() {
	printf("Bitte geben Sie die drei Kantenlaengen des Quaders ein:\n");
	float kante1, kante2, kante3;
	scanf_s("%f", &kante1);
	scanf_s("%f", &kante2);
	scanf_s("%f", &kante3);
	printf("Das Volumen betraegt: %0.2f\n", kante1 * kante1 * kante3);
	printf("Die Oberflaeche betraegt: %0.2f\n", 2*(kante1 * kante2 + kante2 * kante3 + kante1 * kante3));
	printf("Die Gesamtkantenlaenge betraegt: %0.2f\n", 3 * (kante1 + kante2 + kante3));
}