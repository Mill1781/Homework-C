#include <stdio.h>
#include <math.h>

int main()
{
	int n1, temp, p = 0;
	double n2 = 0;
	scanf_s("%d", &n1);
	temp = n1;
	while (temp >= 10 || temp <= -10) {
		temp /= 10;
		p++;
	}
	temp = n1;
	while (	p != -1) {
		n2 += (n1 % 10)*pow(10, p);
		n1 /= 10;
		p--;
	}
	printf("%.0f", n2+temp);
	return 0;
}
