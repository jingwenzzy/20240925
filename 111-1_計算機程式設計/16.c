﻿/*#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
void bubble_sort(int in[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (in[j] > in[j + 1]) {
				int temp = in[j];
				in[j] = in[j + 1];
				in[j + 1] = temp;
			}
		}
	}
}
int main() {
	int n = 0, in[100], out[100], count = 1, a[100], x = 0;
	scanf("%d", &n);
	for (int a = 0; a < n; a++)
		scanf("%d", &in[a]);

	bubble_sort(in, n);
	
	for (int i = 0; i < n; i++) {
		out[i] = 0;
		for (int j = 0; j < i; j++) {
			if (in[i] == in[j]) {
				out[j] = 1;
				break;
			}
		}
	}

	for (int k = 0; k < n; k++) {
		if (out[k] == 1) {
			count++;
		}
	}
	
	if (count == 1) {
		printf("No repeated numbers!");
	}

	else {
		for (int x = 0; x < n; x++) {
			if (out[x] == 1) {
				printf("%d 00", in[x]);
			}
		}
	}
	return 0;
}*/
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int size, len = 0;
	scanf_s("%d", &size);
	int arr[101], output[101];
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				arr[j] ^= arr[j + 1];
				arr[j + 1] ^= arr[j];
				arr[j] ^= arr[j + 1];
			}
		}
	}
	int temp = arr[0];
	for (int i = 0; i < size - 1; i++) {
		if (temp == arr[i] && i != 0)
			continue;
		if (arr[i] == arr[i + 1]) {
			output[len] = arr[i];
			temp = arr[i];
			len++;
		}
	}
	if (len == 0)
		puts("No repeated numbers!\n");
	else {
		for (int i = 0; i < len - 1; i++)
			printf("%d ", output[i]);
		printf("%d\n", output[len - 1]);
	}
	return 0;
}