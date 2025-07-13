#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int sum;
	int count[19] = {0};
	for (int i = 0; i < 2000; i++) {
		sum = 0;
		for (int i = 0; i < 3; i++) {
			sum += rand() % 6 + 1;
		}
		count[sum]++;
	}
	for (int i = 3; i < 18; i++) {
		printf("when sum = %3d, sum showed up %d time(s)\n", i, count[i]);
	}

	system("pause");
	return 0;
}