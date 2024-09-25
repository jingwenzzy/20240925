#pragma warning(disable : 4996)
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
	int n = 0;
	scanf("%d", &n);
	int in[100];
	for (int i = 0; i < n; i++) {
		scanf("%d", &in[i]);
	}
	
	bubble_sort(in, n);

	for (int i = 0; i < n-1; ++i) {
		printf("%d ", in[i]);
	}
	printf("%d", in[n-1]);
	return 0;
}