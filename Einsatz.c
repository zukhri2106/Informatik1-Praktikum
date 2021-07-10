#include "Einsatz.h"
#include<stdio.h>


int* Einlesen(int size) {
	//printf("Einlesen\n");
	int* arr = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size;i++) {
		arr[i] = rand()%100;
	}
	return arr;
}

int* Sortieren(int arr[], int size, int reihenfolge) {
	//printf("Sortieren\n");
	//int larger=arr[0];
	int temp;
	int swap;

	switch (reihenfolge) {
	case 0: //absteigend
		do {
			swap = 0;
			for (int i = 0;i < size;i++) {
				if (i < size - 1) {
					if (arr[i] < arr[i + 1]) {
						//swap
						temp = arr[i];
						arr[i] = arr[i + 1];
						arr[i + 1] = temp;
						swap = 1;
					}
				}

			}
		} while (swap);
		break;
	case 1: //aufsteigend
		do {
			swap = 0;
			for (int i = 0;i < size;i++) {
				if (i < size - 1) {
					if (arr[i] > arr[i + 1]) {
						//swap
						temp = arr[i];
						arr[i] = arr[i + 1];
						arr[i + 1] = temp;
						swap = 1;
					}
				}

			}
		} while (swap);
		break;
	default:
		printf("Ungueltige Eingabe!\n");
		break;
	}
	return arr;
}

void Ausgabe(int arr[], int size) {
	//printf("Ausgabe\n");
	for (int i = 0;i < size;i++) {
		printf("%d", arr[i]);
		if (i != size - 1) {
			printf(" - ");
		}
	}
	printf("\n");
}
