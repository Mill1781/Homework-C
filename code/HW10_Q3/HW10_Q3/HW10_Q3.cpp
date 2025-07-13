#include <stdio.h>
#define PI 3.14159


float area(float);
void perimeter(float, float *);

int main()
{
	float r, a, s;
	scanf_s("%f", &r);
	a = area(r);
	perimeter(r, &s);
	printf("Area:%3f\nPerimeter:%3f", a, s);
	return 0;
}


float area(float r) {
	return PI * r * r;
}
void perimeter(float r, float *s) {
	*s = 2 * PI * r;
}