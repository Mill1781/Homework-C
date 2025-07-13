#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i;
	int arr[1000];
	char str[1000] = {0};
	printf("Decimal:");
	scanf_s("%d", &n);
	i = 0;
	while (n != 0) {
		arr[i] = n % 16;
		n /= 16;
		i++;
	}
	for (int j = 0; j < i; j++) {
		if (arr[j] > 10) {
			str[j] = arr[j] + 55;
		}
		else {
			str[j] = arr[j] + 48;
		}
	}
	printf("Hexadecimal:");
	for (int j = 0; j < i; j++) {
		printf("%c", str[i-j-1]);
	}
	printf("\n");
	system("pause");
	return  0;
}
