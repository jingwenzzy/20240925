#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int loc[2] = { 0,0 };
char M[20][20], a[20][20];
int O = 0;
char D = 'R';
int count = 0;

int main() {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 16; j++) {
			scanf("%c", &M[i][j]);
		}
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 16; j++) {
			a[i][j] = M[i][j];
		}
	}
	for (int i = 0; i < 15; i++) {
		if (M[i][0] == 'X') {
			O = i;
			a[i][0] = 'R';
		}
	}
	loc[0] = O;
	do {
		count++;
		switch (D) {
		case 'U':
			if (M[loc[0]][loc[1] + 1] == 'X') {
				a[loc[0]][loc[1] + 1] = 'R';
				D = 'R';
				loc[1]++;
			}
			else if (M[loc[0] - 1][loc[1]] == 'X') {
				a[loc[0] - 1][loc[1]] = 'R';
				D = 'U';
				loc[0]--;
			}
			else {
				D = 'L';
			}
			break;

		case 'R':
			if (M[loc[0] + 1][loc[1]] == 'X') {
				a[loc[0] + 1][loc[1]] = 'R';
				D = 'D';
				loc[0]++;
			}
			else if (M[loc[0]][loc[1] + 1] == 'X') {
				a[loc[0]][loc[1] + 1] = 'R';
				D = 'R';
				loc[1]++;
			}
			else {
				D = 'U';
			}
			break;

		case 'D':
			if (M[loc[0]][loc[1] - 1] == 'X') {
				a[loc[0]][loc[1] - 1] = 'R';
				D = 'L';
				loc[1]--;
			}
			else if (M[loc[0] + 1][loc[1]] == 'X') {
				a[loc[0] + 1][loc[1]] = 'R';
				D = 'D';
				loc[0]++;
			}
			else {
				D = 'R';
			}
			break;

		case 'L':
			if (M[loc[0] - 1][loc[1]] == 'X') {
				a[loc[0] - 1][loc[1]] = 'R';
				D = 'U';
				loc[0]--;
			}
			else if (M[loc[0]][loc[1] - 1] == 'X') {
				a[loc[0]][loc[1] - 1] = 'R';
				D = 'L';
				loc[1]--;
			}
			else {
				D = 'D';
			}
			break;
		}
		if (loc[0] == O && loc[1] == 0) {
			break;
		}
	} while (loc[1] != 14);


	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 16; j++) {
			printf("%c", a[i][j]);
		}
	}

	if (loc[1] == 14) {
		printf("This maze has a solution");
	}
	if (loc[0] == O && loc[1] == 0) {
		printf("This maze has no solution");
	}
	return 0;
}