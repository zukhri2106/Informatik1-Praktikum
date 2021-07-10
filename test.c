#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	struct Eintrag* naechster;
	int nr;
}Eintrag;

void printList(Eintrag* n) {
	while (n != NULL) {
		printf("%d ", n->nr);
		n = n->naechster;
	}
}

void main() {
	Eintrag* head = NULL;
	Eintrag* second = NULL;
	Eintrag* third = NULL;
	//char field[20];

	//head = (Eintrag*)malloc(sizeof(Eintrag));
	//second = (Eintrag*)malloc(sizeof(Eintrag));
	//third = (Eintrag*)malloc(sizeof(Eintrag));

	////head->nr = "bb";
	//scanf("%s", &field);
	//strcpy(head->nr, field);
	//head->naechster = second;

	////second->nr = 2;
	//scanf("%s", &field);
	//strcpy(second->nr, field);
	//second->naechster = third;

	////third->nr = 3;
	//scanf("%s", &field);
	//strcpy(third->nr, field);
	//third->naechster = NULL;

	Eintrag* newEintrag = (Eintrag*)malloc(sizeof(Eintrag));
	Eintrag* temp = head;
	newEintrag->nr = 1;
	newEintrag->naechster = NULL;
	if (head == NULL) {
		head = newEintrag;
	}

	while (temp->naechster != NULL) {
		temp = temp->naechster;
	}
	temp->naechster = newEintrag;


	printList(head);
}