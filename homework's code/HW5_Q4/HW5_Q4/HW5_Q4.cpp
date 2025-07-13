#include <stdio.h>
int main()
{
	int m;
	printf("輸入農曆月份：");
	scanf_s("%d", &m);//輸入月份
	switch (m) {
	case 1:
		printf("此月為冬季");
		break;
	case 2:
		printf("此月為春季");
		break;
	case 3:
		printf("此月為春季");
		break;
	case 4:
		printf("此月為春季");
		break;
	case 5:
		printf("此月為夏季");
		break;
	case 6:
		printf("此月為夏季");
		break;
	case 7:
		printf("此月為夏季");
		break;
	case 8:
		printf("此月為秋季");
		break;
	case 9:
		printf("此月為秋季");
		break;
	case 10:
		printf("此月為秋季");
		break;
	case 11:
		printf("此月為冬季");
		break;
	case 12:
		printf("此月為冬季");
		break;
	}//用switch慢慢把事件寫入
	return 0;
}