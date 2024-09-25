#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <math.h>

int main() {
	float num1 = 0, num2 = 0, a = 0, b = 0, c = 0;
	scanf("%f %f", &num1, &num2);
	a = num1 * num1 + num2 * num2;
	a = sqrt(a);
	b = num1 / a;
	c = num2 / a;

	printf("%.2f\n", a);
	printf("%.2f %.2f", b, c);
	return 0;
}


