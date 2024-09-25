#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int num1 = 0, num2 = 0, a = 0, len = 0;
	char s[10000];
	scanf("%s", &s);
	len = strlen(s);
	for (int i = 0; i < len; i += 2) {
		num1 += s[i] - '0';
	}
	for (int j = 1; j < len; j += 2) {
		num2 += s[j] - '0';
	}
	a = num1 - num2;
	if (a % 11 == 0)
		printf("%s is a multiple of 11.\n", s);
	else
		printf("%s is not a multiple of 11.\n", s);
	return 0;
} 