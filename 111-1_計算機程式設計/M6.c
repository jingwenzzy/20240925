#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int amount = 0;
	scanf("%d", &amount);

	for (int times = 0; times < amount; times++) {

		// ���إߤ@�Ӧr���}�C��L�n��J�i�Ӫ��r��
		char str[201] = { '\0' };
		scanf("%s", str);

		printf("Case %d: ", times + 1);

		// �ڭ̤@�Ӥ@�ӥhŪ���}�C���r���A�p�GŪ�� '\0'�A���N�N��o�Ӧr��w�g�쩳�F;
		// count = 1 ����]�O�]���A�ڭ̹w�]�@�}�lŪ�쪺�r�������N�O�@������
		int count = 1;
		for (int i = 0; str[i] != '\0'; i++) {

			// �p�G�o�Ӧr����U�Ӧr���ۦP���ܡAcount++
			if (str[i] == str[i + 1]) {
				count++;
			}
			// �p�G���ۦP���ܡA�N��o�Ӧr���Υ����ƪ����ƿ�X�A�åB�A�� count = 1
			else {
				printf("%c%d", str[i], count);

				count = 1;
			}
		}

		if (times != amount - 1) printf("\n");
	}
}