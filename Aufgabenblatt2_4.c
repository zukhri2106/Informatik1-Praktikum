#include <stdio.h>

void main() {
	printf("***** Telefonverzeichnis *****\n\n");

	printf("E = Neuen Eintrag einfuegen\n"
		"L = Eintrag loeschen\n"
		"S = Telefonnummer suchen\n"
		"A = Alle Eintraege anzeigen\n"
		"B = Programm beenden\n\n");

	printf("IhreWahl: ");
	char wahl;
	scanf("%c", &wahl);
	printf("Sie haben gewaehlt: ");
	switch (wahl)
	{
	case 'E':
	case 'e':
		printf("Neuen Eintrag einfuegen\n");
		break;
	case 'L':
	case 'l':
		printf("Eintrag loeschen\n");
		break;
	case 'S':
	case 's':
		printf("Telefonnummer suchen\n");
		break;
	case 'A':
	case 'a':
		printf("Alle Eintraege anzeigen\n");
		break;
	case 'B':
	case 'b':
		printf("Programm beenden\n");
		break;
	default:
		printf("Die Eingabe war nicht korrekt.\n");
		break;
	}
}