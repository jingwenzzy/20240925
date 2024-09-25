#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

#include<stdio.h>
#include<stdbool.h>

int main() {
	int x;
	char ox[30][200] = { '\0' };
	scanf("%d", &x);
	scanf(" ");
	for (int i = 0; i < x; i++) {
		char c = '0';
		int cool = 0, num = 1, s_c = 0, error = 0;
		bool next = true;
		while (error < 2) {
			c = getchar();
			if (c == '\n') {
				num = 1;
				error++;
				cool = 0;
				next = true;
				ox[i][s_c] = '\n';
				s_c++;
			}
			else if (next && c != '\n' && c != ' ') {
				cool++;
				error = 0;
			}
			else if (c == ' ') {
				cool = 0;
				error = 0;
				next = true;
			}
			if (cool == num) {
				ox[i][s_c] = c;
				s_c++;
				num++;
				next = false;
				cool = 0;
			}
		}
	}
	for (int i = 0; i < x; i++) {
		printf("Case #%d:\n%s", i + 1, ox[i]);
	}
	return 0;
}