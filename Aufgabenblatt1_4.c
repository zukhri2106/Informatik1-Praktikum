#include <stdio.h>

void main() {
	int tF;
	double tC1,tC2;
	printf("Teilaufgabe a):\n");
	printf("Bitte geben Sie eine ganzahlige Temperatur in Grad Fahrenheit ein: ");
	scanf_s("%d", &tF);
	tC1 = (5 / 9) * (tF - 32);	//	5/9 ergibt 0, da 5 und 9 integer sind
	tC2 = (5 * (tF - 32)) / 9;
	printf("\n%d Grad Fahrenheit sind nach Formel 1: %.2lf Grad Celsius\n"
			"und nach Formel 2: %.2lf Grad Celsius\n\n", tF, tC1, tC2);

	double tF_2;
	printf("Teilaufgabe b)\n");
	printf("Bitte geben Sie eine Kommazahl ein\n"
		"und benutzen Sie als Kommazeichen den Punkt.\n\n"
		"Bitte geben Sie eine ganzahlige Temperatur in Grad Fahrenheit ein: ");
	scanf_s("%lf", &tF_2);
	tC1 = (5 / 9) * (tF_2 - 32);	//	5/9 ergibt 0, da 5 und 9 integer sind
	tC2 = (5 * (tF_2 - 32)) / 9;

	printf("\n%lf Grad Fahrenheit sind nach Formel 1: %.2lf Grad Celsius\n"
		"und nach Formel 2: %.2lf Grad Celsius\n\n", tF_2, tC1, tC2);
}