#include <stdio.h>
#include <stdlib.h>

void result(int *, int, int);

int main()
{
	int n, now;
	printf("enter the data's amount you want:");
	scanf_s("%d", &n);
	int *arr = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("enter number%2d:", i+1);
		scanf_s("%d", arr+i);
	}
	for (int i = 0; i < n; i++) {
		result(arr+i, n, i);
	}
	free(arr);
	return 0;
}

void result(int *arr, int n, int t) {
	static int max;
	if (t == 0) {
		max = *arr;
	}
	else {
		if (*arr > max)
			max = *arr;
	}
	printf("New value:%4d, Current max:%4d\n", *arr, max);
	
	if (t == n - 1) {
		printf("Final max value:%4d", max);
	}
}
