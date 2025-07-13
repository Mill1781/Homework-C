#include "sorts.h"
#include <stdio.h>

void sort(int *arr, int *n) {
	int temp;
	bool key;
	for (int i = 0; i < *n-1; i++) {
		key = 1;
		for (int j = 0; j < *n-1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				key = 0;
			}
		}
		if (key) {
			break;
		}
	}
}