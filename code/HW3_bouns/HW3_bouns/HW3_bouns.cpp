#include <stdio.h>
#include <stdlib.h>
int a = 0, b = 1, c = 5;
int main()
{
	c += ++a + b--;//先處理++a，然後再處理c = a + b和b--;
	printf("a = %d , b = %d , c = %d\n", a, b, c);
	c -= a-- + --b;//先處理c = a + b和--b，然後再處理a--;
	printf("a = %d , b = %d , c = %d\n", a, b, c);
	c *= --a + b++;//先處理--a，然後再處理c = a + b和b++;
	printf("a = %d , b = %d , c = %d\n", a, b, c);
	c /= (--a + b++);//先處理--a，然後再處理c = a + b和b++;
	printf("a = %d , b = %d , c = %d\n", a, b, c);
	system("pause");
	return 0;
}
