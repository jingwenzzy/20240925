#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);

	// 上半(含中間)
	for (int i = 0; i < num; i++) {

		// 若 num = 5, 那 1~5 行的空格數量是 4 3 2 1 0
		for (int j = num - i - 1; j > 0; j--) {
			printf(" ");
		}

		// 若 num = 5, 那 1~5 行的 * 數量是 1 3 5 7 9
		for (int j = 0; j < (i * 2) + 1; j++) {
			printf("*");
		}

		printf("\n");
	}

	// 下半(不含中間)
	for (int i = 0; i < num - 1; i++) {

		// 若 num = 5, 那 6~9 行的空格數量是 1 2 3 4
		for (int j = num - i - 1; j < num; j++) {
			printf(" ");
		}

		// 若 num = 5, 那 6~9 行的 * 數量是 7 5 3 1
		for (int j = ((num - i) * 2 - 1) - 2; j > 0; j--) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}