#include <stdio.h>

void einlesen(float* widerstaende,int anzahl) {
	for (int i = 0;i < anzahl;i++) {
		printf("Bitte geben Sie den %d. Widerstand in Ohm ein: ", i + 1);
		scanf(" %f", &widerstaende[i]);
	}
}

void berechnen(char schaltung, float widerstaende[], int anzahl) {
	float r_ersatz = 0;
	int notValid = 0;
	switch (schaltung) {
	case 'p':
	case 'P':
		r_ersatz = 0;
		for (int i = 0;i < anzahl;i++) {
			r_ersatz = r_ersatz + 1.0 / widerstaende[i];
		}
		r_ersatz = 1.0 / r_ersatz;
		printf("Der Gesamtwiderstand betraegt: %.2f Ohm\n", r_ersatz);
		break;
	case 'r':
	case 'R':
		r_ersatz = 0;
		for (int i = 0;i < anzahl;i++) {
			r_ersatz = r_ersatz + widerstaende[i];
		}
		printf("Der Gesamtwiderstand betraegt: %.2f Ohm\n", r_ersatz);
		break;
	default:
		printf("ungueltige Eingabe\n");
		break;
	}
}

void main() {
	int anzahl;

	printf("Wie viele Widerstaende moechten Sie berechnen? ");
	scanf("%d", &anzahl);
	float* widerstaende = (float*)malloc(anzahl * sizeof(float));

	printf("Bitte geben Sie fuer die Widerstaende positive Zahlen groesser 0 ein.\n");
	einlesen(widerstaende, anzahl);
	printf("\nBitte waehlen Sie p fuer Parallelschaltung und r fuer reihenschaltung: ");
	char schaltung;
	scanf(" %c", &schaltung);
	
	berechnen(schaltung, widerstaende, anzahl);
}