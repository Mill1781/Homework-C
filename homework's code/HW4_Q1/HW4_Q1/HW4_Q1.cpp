#include <stdio.h>//輸入輸出標準函式庫
#include <math.h>//需用到floor
int main()
{
	float num;//宣告要輸入的數字
	float hour, min, sec;//等等要儲存結果的變數
	scanf("%f", &num);//輸入num
	hour = floor(num / 3600);//取小時，整數後小數點不取
	min = floor((num - hour * 3600) / 60);//取分鐘，同理
	sec = num - min * 60 - hour * 3600;//用數學關係取秒數
	printf("%.0f小時/%.0f分/%.0f秒", hour, min, sec);//輸出結果
	return 0;
}

