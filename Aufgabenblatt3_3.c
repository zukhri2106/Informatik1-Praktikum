#include <stdio.h>

void main() {
	int r1 = 0, r2 = 0, r3 = 0;
	printf("Bitte geben Sie fuer die Widerstaende positive Zahlen groesser 0 ein.\n");
	
	int first = 1;
	do {
		if (first) {
			printf("Bitte geben Sie den ersten Widerstand in Ohm ein: ");
			scanf(" %d", &r1);
			printf("Bitte geben Sie den zweiten Widerstand in Ohm ein: ");
			scanf(" %d", &r2);
			printf("Bitte geben Sie den dritten Widerstand in Ohm ein: ");
			scanf(" %d", &r3);
			first = 0;
		}
		else {
			printf("die Widerstaende duerfe nicht 0 oder negative sein!\n");
			if (r1 <= 0) {
				printf("Bitte geben Sie noch einmal den ersten Widerstand in Ohm ein: ");
				scanf(" %d", &r1);
			}
			else if (r2 <= 0) {
				printf("Bitte geben Sie noch einmal den zweiten Widerstand in Ohm ein: ");
				scanf(" %d", &r2);
			}
			else if (r3 <= 0) {
				printf("Bitte geben Sie noch einmal den dritten Widerstand in Ohm ein: ");
				scanf(" %d", &r3);
			}
		}
		
	} while (r1 <= 0 || r2 <= 0 || r3 <= 0);


	printf("\nBitte waehlen Sie p fuer Parallelschaltung und r fuer reihenschaltung: ");
	char schaltung;
	scanf(" %c", &schaltung);
	float r_ersatz = 0;
	switch (schaltung) {
	case 'p':
	case 'P':
		r_ersatz = 1.0 / (1.0 / r1 + 1.0 / r2 + 1.0 / r3);
		printf("Der Ersatzwiderstand der Parallelschaltung ist: %.2f Ohm\n", r_ersatz);
		break;
	case 'r':
	case 'R':
		r_ersatz = r1 + r2 + r3;
		printf("Der Ersatzwiderstand der Reiheschaltung ist: %.2f Ohm\n", r_ersatz);
		break;
	default:
		printf("ungueltige Eingabe\n");
		break;
	}	
}