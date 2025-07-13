#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	bool key;
	int arr[10], temp, time;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		key = 1;
		for (int j = 0; j < 10-i-1; j++) {
			if (arr[j] > arr [j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
				key = 0;
			}
		}
		if (key) {
			time = i+1;
			break;
		}
	}
	printf("bubble sort is finished in %d round.\n", time);
	for (int i = 0; i < 10; i ++) {
		printf("%d ", arr[i]);
	}
	system("pasue");
	return 0;
}