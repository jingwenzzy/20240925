#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int sum = 0, in[10], out[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &in[i]);
		out[i] = 0;
		for (int j = 0; j < i; j++) {
			if (in[i] == in[j]) {
				out[j] = 1;
				break;
			}
		}
	}
	for (int k = 0; k < 10; k++) {
		if (out[k] == 1) {
			sum += in[k];
		}
	}
	printf("%d", sum);
	return 0;
}