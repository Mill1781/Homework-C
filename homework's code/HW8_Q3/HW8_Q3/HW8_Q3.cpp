#include <stdio.h>
#include <stdlib.h>
const int row = 3;
const int col = 3;

int main()
{

	int a[row*col] = { 45, 36, -13, 15, 20, -24, 9, 61, 5 };
	int b[row*col] = { 16, 14, 35, -15, 54, -23, 12, -61, 10 };
	printf(" A+B\n");
	for (int i = 0; i < row ; i++) {
		for (int j = 0; j < col ; j++) {
			printf("%3d ", a[i*row + j] + b[i*row + j]);
		}
		printf("\n");
	}
	printf("\n A-B\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%3d ", a[i*row + j] - b[i*row + j]);
		}
		printf("\n");
	}
	printf("\n A*B\n");
	int c[9] = {0};
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {

			for (int k = 0; k < col; k++) {
				c[col*i + j] += a[row*i + k] * b[j + row * k];
			}
			printf("%5d ", c[col*i + j]);
		}
		printf("\n");
	}
	printf("\n A transpose\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%3d ", a[j*row + i]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}