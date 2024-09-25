#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include<string.h>

int main() {
	int sh = 0, len = 0;
	char in[200], out[200];
	scanf("%[^\n]", &in);
	scanf("%d", &sh);
	len = strlen(in);
	sh = sh % 26;
	for (int i = 0; i < len; i++) {
		if (in[i] >= 'A' && in[i] <= 'Z') {
			if ((in[i] + sh >= 'A') && (in[i] + sh <= 'Z')) {
				out[i] = in[i] + sh;
			}
			else if (in[i] + sh > 'Z') {
				out[i] = in[i] + sh - 26;
			}
			else {
				out[i] = in[i] + sh + 26;
			}
		}
		else if (in[i] >= 'a' && in[i] <= 'z') {
			if ((in[i] + sh >= 'a') && (in[i] + sh <= 'z')) {
				out[i] = in[i] + sh;
			}
			else if (in[i] + sh > 'z') {
				out[i] = in[i] + sh - 26;
			}
			else {
				out[i] = in[i] + sh + 26;
			}
		}
		else {
			out[i] = in[i];
		}
		printf("%c", out[i]);
	}
	printf("\n");
	return 0;
}