#include<stdio.h>

int istTeiler(int zahl, int teiler) {
	if (zahl < 0) {
		return 2;
	}
	if (zahl % teiler == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void main() {
	int zahl, teiler;
	printf("Bitte geben Sie eine positive ganze Zahl ein: ");
	scanf("%d", &zahl);
	printf("Bitte geben Sie den moeglichen Teiler ein: ");
	scanf("%d", &teiler);
	switch (istTeiler(zahl, teiler)) {
	case 0:
		printf("Zahl %d ist kein Teiler der Zahl %d\n", teiler, zahl);
		break;
	case 1:
		printf("Zahl %d ist ein Teiler der Zahl %d\n", teiler, zahl);
		break;
	case 2:
		printf("Die Zahl %d ist eine negative Zahl\n", zahl);
		break;
	default:
		break;
	}
}