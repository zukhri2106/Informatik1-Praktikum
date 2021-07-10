#include <stdio.h>
#include<stdlib.h>

typedef struct 
{
	struct Eintrag* naechster;
	int nr;
	char name[20];
}Eintrag;

void main() {
	int eingabe;
	Eintrag* head = NULL;
	Eintrag* temp;

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
			printf("Bitte Ihre Name eingeben: ");
			char name[20];
			scanf(" %s", &name);
			printf("Bitte die Nummer eingeben: ");
			int num;
			scanf(" %d", &num);
			Eintrag* neuEintrag = (Eintrag*)malloc(sizeof(Eintrag));
			neuEintrag->nr = num;
			strcpy(neuEintrag->name, name);
			neuEintrag->naechster = NULL;
			temp = head;
			
			if (head == NULL) {
				head = neuEintrag;
			}
			else {
				while (temp->naechster != NULL) {
					temp = temp->naechster;
				}
				temp->naechster = neuEintrag;
			}
			
			break;
		case 'L':
		case 'l':
			printf("Sie haben gewaehlt: Eintrag loeschen\n");
			break;
		case 'S':
		case 's':
			printf("Sie haben gewaehlt: Telefonnummer suchen\n");
			printf("Bitte geben Sie die Telefonnummer, die Sie suchen moechten: ");
			int tnummer;
			scanf("%d", &tnummer);
			temp = head;
			while (temp != NULL) {
				if (temp->nr == tnummer) {
					printf("die Telefonnumer %d gehoert zu %s\n", tnummer, temp->name);
				}
				temp = temp->naechster;
				if (temp == NULL) {
					printf("Die Suche kommt zu Ende\n");
				}
			}
			break;
		case 'A':
		case 'a':
			printf("Sie haben gewaehlt: Alle Eintraege anzeigen\n");
			temp = head;
			printf("naechster                          nr       name\n");
			Eintrag* next;
			while (temp != NULL) {
				next = temp->naechster;
				if (next != NULL) {
					printf("Zeiger auf Struktur mit Nr.%d     %d       %s\n", next->nr, temp->nr, temp->name);
				}
				else {
					printf("NULL                               %d       %s\n", temp->nr, temp->name);
				}
				temp = temp->naechster;
			}
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

	printf("Sie haben %dmal falsch gewaehlt, das Programm wird beendet.\n", eingabe);

}