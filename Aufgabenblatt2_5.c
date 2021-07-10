#include <stdio.h>

void main() {
	printf("***** Telefonverzeichnis *****\n\n");

	printf("E = Neuen Eintrag einfuegen\n"
		"L = Eintrag loeschen\n"
		"S = Telefonnummer suchen\n"
		"A = Alle Eintraege anzeigen\n"
		"B = Programm beenden\n\n");

	int loop = 1;
	while (loop) {
		printf("IhreWahl: ");
		char wahl;
		scanf(" %c", &wahl);
		switch (wahl)
		{
		case 'E':
		case 'e':
			printf("Sie haben gewaehlt: Neuen Eintrag einfuegen\n");
			loop = 0;
			break;
		case 'L':
		case 'l':
			printf("Sie haben gewaehlt: Eintrag loeschen\n");
			loop = 0;
			break;
		case 'S':
		case 's':
			printf("Sie haben gewaehlt: Telefonnummer suchen\n");
			loop = 0;
			break;
		case 'A':
		case 'a':
			printf("Sie haben gewaehlt: Alle Eintraege anzeigen\n");
			loop = 0;
			break;
		case 'B':
		case 'b':
			printf("Sie haben gewaehlt: Programm beenden\n");
			loop = 0;
			break;
		default:
			printf("Die Eingabe war nicht korrekt.\n");
			
			break;
		}
	}
	
}