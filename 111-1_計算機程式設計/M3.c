#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int amount = 0;
	scanf("%d", &amount);

	for (int i = 0; i < amount; i++) {

		double a = 0;
		double b = 0;
		char ope = '\0';
		scanf("%lf%c%lf", &a, &ope, &b);

		double ans = 0;
		if (ope == '+') {
			ans = a + b;
		}
		else if (ope == '-') {
			ans = a - b;
		}
		else if (ope == '*') {
			ans = a * b;
		}
		else {
			ans = a / b;
		}

		printf("Case %d: %.2lf%c%.2lf=%.2lf\n", i + 1, a, ope, b, ans);
	}

	return 0;
}