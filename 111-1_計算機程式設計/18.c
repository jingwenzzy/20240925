#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
int EL(int a, int b) {
	if (b == 0)
		return a;
	return EL(b, a % b);
}
int C(char* input) {
	int sum = 0, len = strlen(input);
	for (int i = len - 1, j = 0; i >= 0; i--, j++) {
		sum += ((input[i] - '0') << j);
	}
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int big, small, e = 0;
		char temp[31];
		scanf("%s", &temp);
		big = C(temp);
		scanf("%s", &temp);
		small = C(temp);
		if (EL(big, small) != 1) {
			printf("Pair #%d: All you need is love!\n", i);
		}
		else {
			printf("Pair #%d: Love is not all you need!\n", i);
		}
	}
	return 0;
}