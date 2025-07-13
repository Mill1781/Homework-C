#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	char s[1000];
	bool key = 1;
	gets_s(s);
	for (int i = 0; i < strlen(s); i++) {
		if (isalpha(s[i]) && key) {
			s[i] = toupper(s[i]);
			key = 0;
		}
		if (s[i] == 32) {
			key = 1;
		}
	}
	puts(s);
	system("pause");
	return 0;
}
