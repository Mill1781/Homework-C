#include <stdio.h>
int main()
{
	int x, y;
	printf("請依序輸入x和y的數值(請用空白健隔開)：");
	scanf_s("%d %d", &x, &y);//輸入x,y
	if (x == 0 || y == 0) {
		if (x == 0 && y == 0) {
			printf("(%d,%d)位於中心", x, y);
		}//x,y在0,0原點
		else if (x == 0 && y != 0) {
			printf("(%d,%d)位於y軸", x, y);
		}//x,y在y軸
		else if (x != 0 && y == 0) {
			printf("(%d,%d)位於x軸", x, y);
		}//x,y在x軸
	}//x或y等於0的情況
	else if (x > 0 && y > 0) {
		printf("(%d,%d)位於第一象限", x, y);
	}//x,y在第一象限
	else if (x < 0 && y > 0) {
		printf("(%d,%d)位於第二象限", x, y);
	}//x,y在第二象限
	else if (x < 0 && y < 0) {
		printf("(%d,%d)位於第三象限", x, y);
	}//x,y在第三象限
	else if (x > 0 && y < 0){
		printf("(%d,%d)位於第四象限", x, y);
	}//x,y在第四象限
	return 0;
}
