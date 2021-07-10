#include<stdio.h>
#include "mystring.h"
#define SIZE 20

void main() {
	char str[SIZE] = "Hello";
	char* str1 = "world";

	printf("String length: %d\n", strlen(str));
	int fehler = strcat(str, SIZE, str1);
	if (fehler == 1) {
		printf("%s\n", str);
	}
	else {
		printf("Fehler: nicht genug Platz\n");
	}
	strmirr(str);
	printf("%s\n", str);
}