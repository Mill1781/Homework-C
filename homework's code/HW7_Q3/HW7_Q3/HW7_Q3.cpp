#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	srand(time(NULL));
	int n = -9, d;
	d = rand() % 20 + 1;
	printf("%d\n", n + 4 * d);
	system("pause");
	return 0;
}
