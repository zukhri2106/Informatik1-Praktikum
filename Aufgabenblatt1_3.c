#include <stdio.h>

void main() {
	char x;
	printf("Bitte geben Sie ein Zeichen ein: ");
	scanf_s("%c", &x);
	printf("Das Zeichen %c entspricht im ASCII Code der Dezimalzahl: %d", x, x);
}