#include <stdio.h>
#include <conio.h>
int main()
{
	int n = 0;
	int num = 0;
	char ch[100];
	do {
		ch[n] = _getche();
		n++;
	} while (ch[n-1] != 13);
	ch[n] = '\0';
	for (int i = 0; i <= n; i++) {
		if ( (ch[i] <= 122 && ch[i] >= 97) || (ch[i] >= 65 && ch[i] <= 90) ) {
			num++;
		}
	}
	printf("\n%d", num);
	return 0;
}


