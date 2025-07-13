#include <stdio.h>
#include <math.h>//使用acos(-1)作為圓周率

int main()
{
	float r;//宣告長度
	double pi = acos(-1);//圓周率的值
	scanf_s("%f", &r);//輸入半徑
	printf("%f", pi * r * r );//直接輸出面積
	return 0;
}