#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int amount = 0;
	scanf("%d", &amount);

	for (int times = 0; times < amount; times++) {

		// 先建立一個字元陣列放他要輸入進來的字串
		char str[201] = { '\0' };
		scanf("%s", str);

		printf("Case %d: ", times + 1);

		// 我們一個一個去讀取陣列的字元，如果讀到 '\0'，那就代表這個字串已經到底了;
		// count = 1 的原因是因為，我們預設一開始讀到的字元本身就是一次重複
		int count = 1;
		for (int i = 0; str[i] != '\0'; i++) {

			// 如果這個字元跟下個字元相同的話，count++
			if (str[i] == str[i + 1]) {
				count++;
			}
			// 如果不相同的話，就把這個字元及它重複的次數輸出，並且再把 count = 1
			else {
				printf("%c%d", str[i], count);

				count = 1;
			}
		}

		if (times != amount - 1) printf("\n");
	}
}