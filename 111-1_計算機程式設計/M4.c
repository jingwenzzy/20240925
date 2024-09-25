#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {

	int num = 0;
	scanf("%d", &num);

	// 就…這個數列你也懂的
	int fib[31] = { 0 };
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i < 31; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	printf("%d\n", fib[num]);

	return 0;
}