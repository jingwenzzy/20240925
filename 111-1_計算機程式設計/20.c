#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
void bubble_sort(float x[], float y[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (x[j] > x[j + 1]) {
				float temp1 = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp1;
				float temp2 = y[j];
				y[j] = y[j + 1];
				y[j + 1] = temp2;
			}
			if (x[j] == x[j + 1]) {
				if (y[j] > y[j + 1]) {
					float temp2 = y[j];
					y[j] = y[j + 1];
					y[j + 1] = temp2;
				}
			}
		}
	}
}
int main() {
	int N = 0;
	float x[11], y[11];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%f", &x[i]);
		scanf("%f", &y[i]);
	}

	bubble_sort(x, y, N);

	for (int i = 0; i < N; i++) {
		printf("%.2f ", x[i]);
		printf("%.2f\n", y[i]);
	}	
	return 0;
}