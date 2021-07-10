#include <stdio.h>

void main() {
	int eingabe;
	printf("Wie viele falsche Eingaben sollen erlaubt sein?: ");
	scanf("%d", &eingabe);
	printf("***** Telefonverzeichnis *****\n\n");

	printf("E = Neuen Eintrag einfuegen\n"
		"L = Eintrag loeschen\n"
		"S = Telefonnummer suchen\n"
		"A = Alle Eintraege anzeigen\n"
		"B = Programm beenden\n\n");

	int count = 0;
	while (count<eingabe) {
		printf("IhreWahl: ");
		char wahl;
		scanf(" %c", &wahl);
		switch (wahl)
		{
		case 'E':
		case 'e':
			printf("Sie haben gewaehlt: Neuen Eintrag einfuegen\n");
			break;
		case 'L':
		case 'l':
			printf("Sie haben gewaehlt: Eintrag loeschen\n");
			break;
		case 'S':
		case 's':
			printf("Sie haben gewaehlt: Telefonnummer suchen\n");
			break;
		case 'A':
		case 'a':
			printf("Sie haben gewaehlt: Alle Eintraege anzeigen\n");
			break;
		case 'B':
		case 'b':
			printf("Sie haben gewaehlt: Programm beenden\n");
			break;
		default:
			printf("Die Eingabe war nicht korrekt.\n");
			count++;
			break;
		}
	}

	printf("Sie haben %dmal falsch gewaehlt, das Programm wird beendet.\n",eingabe);

}