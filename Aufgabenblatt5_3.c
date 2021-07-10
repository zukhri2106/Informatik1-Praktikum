#include<stdio.h>
#include <time.h>
#include "Einsatz.h"
#define SIZE 10

void main() {
	int* arr;
	int reihenfolge;

	srand(time(0));
	arr = Einlesen(SIZE);
	printf("Unsortiertes Array:\n");
	Ausgabe(arr, SIZE);
	printf("In welches Reihenfolge soll sortiert werden?\n"
		"1= aufsteigend; 0= absteigend\n");
	scanf("%d", &reihenfolge);
	arr = Sortieren(arr, SIZE, reihenfolge);
	printf("\nSortiertes Array:\n");
	Ausgabe(arr, SIZE);
}