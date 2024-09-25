#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);

	// 如果數字是 0 的話，就直接輸出 false
	if (num == 0) printf("false\n");

	// 如果這個數是 2 的完全平方數，那除到最後它只會剩下 1
	// 8 -> 4 -> 2 -> 1 -> 跳出
	// 12 -> 6 -> 3 -> 跳出
	while (num % 2 == 0) {
		num /= 2;
	}

	if (num == 1) printf("true\n");
	else printf("false\n");

	return 0;
}