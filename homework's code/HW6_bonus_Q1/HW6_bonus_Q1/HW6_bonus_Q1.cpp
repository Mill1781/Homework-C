#include <stdio.h>

int main()
{
	int a, b, temp, product;
	scanf_s("%d%d", &a, &b);
	product = a * b;
	if (b < a) {
		temp = a;
		a = b;
		b = temp;
	}
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	printf("兩數的最大公因數為：%d\n兩樹的最小公倍數為：%d", a, product/a);
	return 0;
}


