#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int F(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 0;
	}
	else if (n == 2) {
		return 1;
	}
	else if (n > 2) {
		return F(n - 1) + F(n - 2) + F(n - 3);
	}
}

int main() {
	long long int n = 0;
	scanf("%lld", &n);
	n = F(n);
	printf("%lld", n);
	return 0;
}