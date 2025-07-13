#include<stdio.h>

int main()
{
	int year;
	printf("請輸入西元年：");
	scanf_s("%d", &year);
	if(  (year % 4 == 0 && year % 100 != 0)  ||  (year % 400 == 0) ){ //被||前面隔開的是西元年被4整除且不被100整除，後面為被400整除
		printf("%d年是閏年", year);
	}//滿足以上條件為閏年
	else {
		printf("%d年是平年", year);
	}//剩下選項皆是平年
	return 0;
}