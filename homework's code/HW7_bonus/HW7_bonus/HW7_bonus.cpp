#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char arr[100], record[100];
	unsigned long long ch[100];
	bool key = 1;
	printf("please enter your passwords:\n");
	gets_s(arr);
	printf("your input is :%s\n", arr);


	int length, number = 0, alphaB = 0, alphaS = 0, j= 0;
	bool reg = 0, reg2 = 0 ,reg3 = 0;
	length = strlen(arr);
	for (int i = 0; i < length; i++) {
		ch[i] = arr[i];
	}
	for (int i = 0; i < length; i++) {
		if (isdigit(arr[i])) {
			number++;
		}
		if (isalpha(arr[i])) {
			if (isupper(arr[i])) {
				alphaB++;
			}
			else if (islower(arr[i])) {
				alphaS++;
			}
		}
		if (!isascii(arr[i])) {
			reg3 = 1;
		}
		if (isspace(arr[i])) {
			reg2 = 1;
		}
		if (ispunct(arr[i])) {
			reg = 1;
			record[j] = arr[i];
			j++;
		}
	}

	if (length < 12) {
		printf("please enter at least 12 passwords.\n");
		key = 0;
	}
	if (number < 2) {
		printf("please enter at least 2 digits.\n");
		key = 0;
	}
	if (alphaB < 2 || alphaS < 2) {
		printf("please enter at least 2 lowercase alphabets and uppercase alphabets.\n");
		key = 0;
	}
	if (reg) {
		printf("please don't input punctuation marks:");
		for (int i = 0; i < j; i++) {
			printf("%c ", record[i]);
		}
		printf("\n");
		key = 0;
	}
	if (reg2) {
		printf("please don't input space.\n");
		key = 0;
	}
	if (reg3) {
		printf("please don't input chinese characters.\n");
		key = 0;
	}
	if (key) {
		printf("you've entered a valid password%s\n", arr);
		printf("digits:%d\n", number);
		printf("uppercase:%d\n", alphaB + alphaS);
		printf("uppercase:%d\n", alphaB);
		printf("lowercase:%d\n", alphaS);
	}
	if (!key) {
		printf("please input your password again with correct form.\n");
	}
	system("pause");
	return 0;
}