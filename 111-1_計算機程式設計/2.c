#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2 - i; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i * 2; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}