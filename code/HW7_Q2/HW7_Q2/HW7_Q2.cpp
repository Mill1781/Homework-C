#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float a = 0, b = 0, c = 0, reg;
	printf("please input a, b,c according to the following form:\nax^2 + bx + c\n");
	scanf_s("%f%f%f", &a, &b,&c);
	reg = b * b - 4 * a*c;
	if (reg > 0) {
		printf("We have two real roots: %f and %f", (-b + sqrt(reg)) / (2 * a), (-b - sqrt(reg)) / (2 * a));
	}
	else if (reg == 0) {
		printf("We have same real roots: %f", -b / (2 * a));

	}
	else {
		printf("We have imaginary roots: %f + i%f and %f - i%f", -b / (2 * a), sqrt(-reg) / (2 * a), -b / (2 * a), sqrt(-reg) / (2 * a) );
	}
	printf("\n");
	system("pause");
	return 0;
}
