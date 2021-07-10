#include<stdio.h>

void main() {
	int arr[2][4] = { {1,2,3,4},
					  {5,6,7,8} };

	printf("Array ungedreht:\n");
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 4;j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\nArray gedreht:\n");
	for (int i = 0;i < 4;i++) {
		for (int j = 1;j >= 0;j--) {
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
}