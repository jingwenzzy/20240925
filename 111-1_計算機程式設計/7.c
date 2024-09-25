#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	float a = 0, c = 0;
	char b = '0';
	scanf("%f %c %f", &a, &b, &c);
	switch (b)
	{
	case '+':
		printf("%.2f%c%.2f=%.2f", a, b, c, a + c);
		break;
	case '-':
		printf("%.2f%c%.2f=%.2f", a, b, c, a - c);
		break;
	case '*':
		printf("%.2f%c%.2f=%.2f", a, b, c, a * c);
		break;
	default:
		printf("%.2f%c%.2f=%.2f", a, b, c, a / c);
	}
	return 0;
}