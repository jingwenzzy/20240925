#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);

	// (い丁)
	for (int i = 0; i < num; i++) {

		// 璝 num = 5, ê 1~5 ︽计秖琌 4 3 2 1 0
		for (int j = num - i - 1; j > 0; j--) {
			printf(" ");
		}

		// 璝 num = 5, ê 1~5 ︽ * 计秖琌 1 3 5 7 9
		for (int j = 0; j < (i * 2) + 1; j++) {
			printf("*");
		}

		printf("\n");
	}

	// (ぃい丁)
	for (int i = 0; i < num - 1; i++) {

		// 璝 num = 5, ê 6~9 ︽计秖琌 1 2 3 4
		for (int j = num - i - 1; j < num; j++) {
			printf(" ");
		}

		// 璝 num = 5, ê 6~9 ︽ * 计秖琌 7 5 3 1
		for (int j = ((num - i) * 2 - 1) - 2; j > 0; j--) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}