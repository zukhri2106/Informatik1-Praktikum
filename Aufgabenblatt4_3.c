#include <stdio.h>

typedef struct
{
	char eintrag[30];
	char zeichen;
	int anzahl;
}Komponent;

void main() {
	int eingabe;
	Komponent tabelle[6];
	for (int i = 0;i < 6;i++) {
		tabelle[i].anzahl = 0;
		switch (i) {
		case 0:
			tabelle[i].zeichen = ' ';
			strcpy(tabelle[i].eintrag, "Falsche Eingabe");
			break;
		case 1:
			tabelle[i].zeichen = 'E';
			strcpy(tabelle[i].eintrag, "Neuen Eintrag einfuegen");
			break;
		case 2:
			tabelle[i].zeichen = 'B';
			strcpy(tabelle[i].eintrag, "Program beenden");
			break;
		case 3:
			tabelle[i].zeichen = 'L';
			strcpy(tabelle[i].eintrag, "Eintrag loeschen");
			break;
		case 4:
			tabelle[i].zeichen = 'S';
			strcpy(tabelle[i].eintrag, "Telefonnummer suchen");
			break;
		case 5:
			tabelle[i].zeichen = 'A';
			strcpy(tabelle[i].eintrag, "Alle Eintraege anzeigen");
			break;
		default:
			break;
		}
	}
	printf("Wie viele falsche Eingaben sollen erlaubt sein?: ");
	scanf("%d", &eingabe);
	printf("***** Telefonverzeichnis *****\n\n");

	printf("E = Neuen Eintrag einfuegen\n"
		"L = Eintrag loeschen\n"
		"S = Telefonnummer suchen\n"
		"A = Alle Eintraege anzeigen\n"
		"B = Programm beenden\n\n");

	int count = 0;
	while (count < eingabe) {
		printf("IhreWahl: ");
		char wahl;
		scanf(" %c", &wahl);
		switch (wahl)
		{
		case 'E':
		case 'e':
			printf("Sie haben gewaehlt: Neuen Eintrag einfuegen\n");
			tabelle[1].anzahl++;
			break;
		case 'L':
		case 'l':
			printf("Sie haben gewaehlt: Eintrag loeschen\n");
			tabelle[3].anzahl++;
			break;
		case 'S':
		case 's':
			printf("Sie haben gewaehlt: Telefonnummer suchen\n");
			tabelle[4].anzahl++;
			break;
		case 'A':
		case 'a':
			printf("Sie haben gewaehlt: Alle Eintraege anzeigen\n");
			tabelle[5].anzahl++;
			break;
		case 'B':
		case 'b':
			printf("Sie haben gewaehlt: Programm beenden\n");
			tabelle[2].anzahl++;
			break;
		default:
			printf("Die Eingabe war nicht korrekt.\n");
			count++;
			tabelle[0].anzahl++;
			break;
		}
	}

	printf("Sie haben %dmal falsch gewaehlt, das Programm wird beendet.\n\n", eingabe);

	printf("Anzahl Auswahl     Buchstabe Eintrag     Langtext Eintrag\n");
	for (int i = 0;i < 6;i++) {
		printf("     %d                    %c              %s\n", tabelle[i].anzahl, tabelle[i].zeichen, tabelle[i].eintrag);
	}

}