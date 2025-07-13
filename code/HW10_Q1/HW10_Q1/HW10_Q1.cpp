#include <stdio.h>
#include "sorts.h" 
#include <stdlib.h>
int main() {
	int n;
	printf("enter the numbers of the array:");
	scanf_s("%d", &n);
	int *arr = (int*)malloc(n*sizeof(int));
	printf("enter your content:");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	sort(arr, &n);
	printf("after sorted:");
	for (int i = 0; i < n; i++) {
		printf("%3d", arr[i]);
	}
	free(arr);
	return 0;
}