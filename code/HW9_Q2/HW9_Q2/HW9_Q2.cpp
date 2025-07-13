#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, temp, s;
	printf("If you want to exit, please input -1.\n");
		while (1) {
			s = 0;
			printf("Please enter an unsigned number:");
			scanf_s("%d", &n);
			if (n == -1) {
				break;
			}
			temp = n;
			while (temp != 0) {
				temp /= 16;
				s++;
			}
			temp = n;
			char *A = (char *)malloc(s * sizeof(char));
			for (int i = 0; i < s; i++) {
				if (n % 16 >= 10) {
					A[i] = n % 16 + 55;
				}
				else {
					A[i] = n % 16 + 48;
				}
				n /= 16;
			}
			printf("Converted to hexadecimal, it becomes a %d-digit number, and we need %d memories to store it...\n", s, sizeof(A)*s);
			printf("hexadecimal of %d is:0x", temp);
			for (int i = 0; i < s; i++) {
				printf("%c", A[s - i - 1]);
			}
			printf("\n");
			free(A);
		}
	system("pause");
	return 0;
}