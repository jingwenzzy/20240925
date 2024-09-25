#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <math.h>

int main() {
	float num1 = 0, num2 = 0, num3 = 0, num4 = 0, a = 0, b = 0, c = 0, d = 0, e = 0;
	scanf("%f %f", &num1, &num2);
	scanf("%f %f", &num3, &num4);
	a = num1 + num3;
	b = num2 + num4;
	c = num1 - num3;
	d = num2 - num4;
	e = num1 * num3 + num2 * num4;

	printf("%.2f %.2f\n", a, b);
	printf("%.2f %.2f\n", c, d);
	printf("%.2f", e);
	return 0;
}
