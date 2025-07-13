#include <stdio.h>
#include <stdlib.h>
int main()
{
	int R, C;
	printf("Please enter your number of ROW:");
	scanf_s("%d", &R);
	printf("Please enter your number of COL:");
	scanf_s("%d", &C);
	int *A = (int *)malloc(R*C * sizeof(int));
	int *B = (int *)malloc(R*C * sizeof(int));
	int *arrC = (int *)malloc(R*C * sizeof(int));
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			A[i*C + j] = i * C + j;
			B[i*C + j] = A[i*C + j];
		}
	}
	for (int i = 0; i < C; i++) {
		for (int j = 0; j < R; j++) {
			arrC[i*R + j] = i * R + j;
		}
	}
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			printf("A[%d][%d] = %d", i, j, A[i*R + j]);
			printf("\tadress of A[%d][%d] = 0x%x", i, j, &A[i*R + j]);
			printf("\n");
		}
	}

	//I'm separator line. 

	printf("\n\nA + B =\n");
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			printf("A[%d][%d] + B[%d][%d] = %d", i, j, i, j, A[i*R + j]+B[i*R + j]);
			printf("\n");
		}
	}
	printf("\n\nA - B =\n");
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			printf("A[%d][%d] - B[%d][%d] = %d", i, j, i, j, A[i*R + j] - B[i*R + j]);
			printf("\n");
		}
	}
	//I'm separator line.
	printf("A * C = \n");
	int sum;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < R; j++) {

			sum = 0;
			for (int k = 0; k < C; k++) {
				sum += A[i*C + k] * arrC[k*R + j];
			}
			printf("%d\t", sum);

		}
		printf("\n");
	}
	//I'm separator line.
	printf("C transpose = \n");
	for (int i = 0; i < C; i++) {
		for (int j = 0; j < R; j++) {
			printf("%d\t", arrC[R*C - (i*R + j) - 1]);
		}
		printf("\n");
	}
	free(A);
	free(B);
	free(arrC);
}
