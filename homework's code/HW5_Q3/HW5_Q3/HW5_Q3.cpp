#include<stdio.h>
int main()
{
	char x;//等等輸入的字元
	printf("請輸入一個大寫字母：");
	scanf_s("%c",&x);
	printf("小寫字母為：%c", (x + 32));//利用ascii code的排序，所有大寫字母和小寫字母都差了32
	return  0;
}