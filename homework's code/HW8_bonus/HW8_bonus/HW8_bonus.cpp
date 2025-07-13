#include <stdio.h>
#include <stdlib.h>
int main()
{
	int I[100][100] = { 0 };
	int M[100][100] = { 0 };
	int n, k;
	scanf_s("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		I[i][i] = 1;
	}
	for (int i = 0; i < n; i++) {
		M[i][i] = 2 * k;
		M[i + 1][i] = -1 * k;
		M[i][i + 1] = -1 * k;
	}
	M[0][0] = 1*k;
	M[n - 1][n - 1] = 1 * k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("A[%d][%d] = %2d  ", i, j, M[i][j]+I[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
