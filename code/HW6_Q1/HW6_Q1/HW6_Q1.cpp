#include <stdio.h>

int main()
{
	double sum = 0;
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += (1.0 / i);
	}
	printf("1+1/2+1/3+…+1/n = %lf", sum);
	return 0;
}
