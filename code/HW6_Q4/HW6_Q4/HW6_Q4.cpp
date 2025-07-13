
#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < num-i ; j++) {
			printf(" ");
		}
		for (int k = 0; k < (2 * i - 1) ; k++ ) {
			printf("*");
		}
		printf("\n");
	}
}

