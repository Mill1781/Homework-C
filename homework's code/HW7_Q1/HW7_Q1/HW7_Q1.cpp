#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	printf("按下任一按鍵開始計時\n====空白健: 分圈     esc: 暫停====\n");
	bool key = 1;
	char s;
	int hour= 0, min = 0, round = 0;
	clock_t start_t, end_t;
	double total_t, second;
	start_t = clock();
	while (key) {
		end_t = clock();
		total_t = ((double)(end_t - start_t)) / (double)(CLOCKS_PER_SEC);
		hour = total_t / 3600;
		min = (total_t - hour * 3600)/60;
		second = (total_t - hour * 3600 - min * 60);
		printf("\t%02d:%02d:%05.2lf\r", hour, min, second);
		if (_kbhit()) {
			s = _getch();
			if (s == 32) {
				round++;
				printf("||第%02d圈|| %02d:%02d:%05.2lf\n", round, hour, min, second);
			}
			if (s == 27) {
				key = 0;
				printf("\n");
			}	
		}
	}
	system("pause");
	return 0;
}

