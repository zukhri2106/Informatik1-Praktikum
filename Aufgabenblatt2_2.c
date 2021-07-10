#include <stdio.h>

void main() {
	char datum1[20], datum2[20];
	int t1, t2, m1, m2, j1, j2;
	int counter = 0;
	printf("Bitte das erste Datum eingeben, in der Form Tag.Monat.Jahr.\n"
			"Datum1: ");
	scanf("%s", datum1);

	char* ptr = strtok(datum1, ".");
	while (ptr != NULL) {
		switch (counter) {
		case 0:
			t1 = atoi(ptr);
			break;
		case 1:
			m1 = atoi(ptr);
			break;
		case 2:
			j1 = atoi(ptr);
		}
		counter++;
		ptr = strtok(NULL, ".");
	}

	printf("\nBitte das zweite Datum eingeben, in der Form Tag.Monat.Jahr.\n"
		"Datum2: ");
	scanf("%s", datum2);

	ptr = strtok(datum2, ".");
	counter = 0;
	while (ptr != NULL) {
		switch (counter) {
		case 0:
			t2 = atoi(ptr);
			break;
		case 1:
			m2 = atoi(ptr);
			break;
		case 2:
			j2 = atoi(ptr);
		}
		counter++;
		ptr = strtok(NULL, ".");
	}
	
	/*int istVorher;
	if (j1 < j2) {
		istVorher = 1;
	}
	else if (j1 > j2) {
		istVorher = 2;
	}
	else {
		if (m1 < m2) {
			istVorher = 1;
		}
		else if (m1 > m2) {
			istVorher = 2;
		}
		else {
			if (t1 < t2) {
				istVorher = 1;
			}
			else if (t1 > t2) {
				istVorher = 2;
			}
			else {
				istVorher = 0;
			}
		}
	}*/
	int istVorher;
	if (j1 < j2 || (m1 < m2 && j1 >= j2) || (t1 < t2 && m1 >= m2 && j1 >= j2)) {
		istVorher = 1;
	}
	else if (j2 < j1 || (m2 < m1 && j2 >= j1) || (t2 < t1 && m2 >= m1 && j2 >= j1)) {
		istVorher = 2;
	}
	else {
		istVorher = 0;
	}
	printf("\nistVorher = %d\n", istVorher);
	switch (istVorher) {
	case 0:
		printf("Das Datum1 <%d.%d.%d> liegt an dem Datum2 <%d.%d.%d>\n", t1, m1, j1, t2, m2, j2);
		break;
	case 1:
		printf("Das Datum1 <%d.%d.%d> liegt vor dem Datum2 <%d.%d.%d>\n", t1, m1, j1, t2, m2, j2);
		break;
	case 2:
		printf("Das Datum1 <%d.%d.%d> liegt nach dem Datum2 <%d.%d.%d>\n", t1, m1, j1, t2, m2, j2);
		break;
	}
	//printf("Datum1: %d.%d.%d, Datum2: %d.%d.%d\n", t1, m1, j1, t2, m2, j2);
}