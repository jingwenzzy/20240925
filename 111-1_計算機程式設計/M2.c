#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);

	// �p�G�Ʀr�O 0 ���ܡA�N������X false
	if (num == 0) printf("false\n");

	// �p�G�o�ӼƬO 2 ����������ơA������̫ᥦ�u�|�ѤU 1
	// 8 -> 4 -> 2 -> 1 -> ���X
	// 12 -> 6 -> 3 -> ���X
	while (num % 2 == 0) {
		num /= 2;
	}

	if (num == 1) printf("true\n");
	else printf("false\n");

	return 0;
}