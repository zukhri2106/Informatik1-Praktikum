#include <stdio.h>
#include <stdlib.h>

void main() {
	int* ptr;
	ptr = (int*)malloc(sizeof(*ptr));
	if (ptr != NULL)
		printf("Allokation erfolgreich");
	else
		printf("Allokation nicht erfolgreich");
}