#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);

	// �W�b(�t����)
	for (int i = 0; i < num; i++) {

		// �Y num = 5, �� 1~5 �檺�Ů�ƶq�O 4 3 2 1 0
		for (int j = num - i - 1; j > 0; j--) {
			printf(" ");
		}

		// �Y num = 5, �� 1~5 �檺 * �ƶq�O 1 3 5 7 9
		for (int j = 0; j < (i * 2) + 1; j++) {
			printf("*");
		}

		printf("\n");
	}

	// �U�b(���t����)
	for (int i = 0; i < num - 1; i++) {

		// �Y num = 5, �� 6~9 �檺�Ů�ƶq�O 1 2 3 4
		for (int j = num - i - 1; j < num; j++) {
			printf(" ");
		}

		// �Y num = 5, �� 6~9 �檺 * �ƶq�O 7 5 3 1
		for (int j = ((num - i) * 2 - 1) - 2; j > 0; j--) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}