#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int amount = 0;
	scanf("%d", &amount);
	getchar();

	// �o�D�̭��� getchar() �ҬO���F���� '����r�� \n' �~�g���A�]�� \n �|�y�� scanf ��Ū���X���A�ҥH�����B�z��

	for (int count = 0; count < amount; count++) {

		float vec1[3] = { 0 };
		float vec2[3] = { 0 };
		scanf("(%f,%f,%f),(%f,%f,%f)", &vec1[0], &vec1[1], &vec1[2], &vec2[0], &vec2[1], &vec2[2]);
		getchar();

		printf("Case %d:\n", count + 1);

		// �V�q�[�k
		printf("  Addition: (");
		for (int i = 0; i < 3; i++) {
			printf("%.2f", vec1[i] + vec2[i]);

			if (i != 2) printf(",");
		}
		printf(")\n");

		// �V�q��k
		printf("  Subtraction: (");
		for (int i = 0; i < 3; i++) {
			printf("%.2f", vec1[i] - vec2[i]);

			if (i != 2) printf(",");
		}
		printf(")\n");

		// �V�q�I�n
		float dot = 0;
		for (int i = 0; i < 3; i++) {
			dot += vec1[i] * vec2[i];
		}
		printf("  Dot: %.2f", dot);

		if (count != amount - 1) printf("\n");
	}
}