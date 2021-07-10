#include <stdio.h>
#include <stdlib.h>
#include"mystring.h"

int strlen(char* str) {
	int length = 0;
	int i = 0;
	while (str[i] != NULL) {
		i++;
	}
	return i;
}
int strcat(char* str1, int n, char* str2) {
	if (n < strlen(str1) + strlen(str2)) {
		return 0;
	}
	else {
		int i = 0;
		while (str1[i] != NULL) {
			i++;
		}
		int k = 0;
		for (int j = i;j < n;j++) {
			str1[j] = str2[k];
			k++;
		}
		return 1;
	}
	
}
void strmirr(char* str) {
	int i = 0;
	while (str[i] != NULL) {
		i++;
	}
	char temp;
	int j = 0;
	int k = i-1;
	while (j < k) {
		temp = str[j];
		str[j] = str[k];
		str[k] = temp;
		j++;
		k--;
	}
}
