#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int time = 0;
	int n = 0;
	bool key = 1;
	char password[4] = "123";
	char input[100] = "0";
	do {
		printf("請輸入完密碼後按下Enter：");
		while (true) {
			input[n] = _getche();
			if (input[n] == 13)
				break;
			n++;
		}
		key = 0;
		if (strlen(input) == 1) {
			printf("\n密碼輸入錯誤");
			key = 1;
			time++;
		}
		else {
			for (int i = 0; i <= n - 1; i++) {
				if (password[i] != input[i] || strlen(input) == 1) {
					printf("\n密碼輸入錯誤");
					key = 1;
					time++;
					break;
				}
			}
		}
		n = 0;
		printf("\n");
		input[1] = '\0';
		if (time == 3) {
			printf("暫停使用本系統!");
			break;
		}
	} while (key);

	if (!key) {
		printf("歡迎光臨本系統!");
	}

	return 0;
}
