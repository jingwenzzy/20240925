#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main(){

	float IN1 = 0, IN2 = 0, a = 0, b = 0, c = 0, d = 0;
	scanf("%f %f", &IN1, &IN2);
	a = IN1 + IN2;
	b = IN1 - IN2;
	c = IN1 * IN2;
	d = IN1 / IN2;
	
	printf("%.2f + %.2f = %.2f\n", IN1, IN2, a);
	printf("%.2f - %.2f = %.2f\n", IN1, IN2, b);
	printf("%.2f * %.2f = %.2f\n", IN1, IN2, c);
	printf("%.2f / %.2f = %.2f\n", IN1, IN2, d);

	return 0;
}