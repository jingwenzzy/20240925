#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <string.h>

int main() {
	int max = 0;
	char input[101];
	scanf("%s", input);
	for (int i = 0; i < strlen(input); i++)	{
		max = (input[i] - 'A') > max ? input[i] - 'A' : max;
	}
	for (int i = 0; i < strlen(input); i++)	{
		for (int j = 0; j < max - (input[i] - 'A'); j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * (input[i] - 'A') + 1; j++) {
			printf("%c", input[i]);
		}
		printf("\n");
	}
	return 0;
}