#include <stdio.h>

int main() {
	int accountNumber;
	double balance, totalCharges, totalCredits, creditLimit, newBalance;

	while (1) {
		// ��J�Ȥ�ƾ�
		printf("��J�b�ḹ�X�]��J-1�h�X�^�G");
		scanf("%d", &accountNumber);

		if (accountNumber == -1) {
			break; // �p�G��J-1�A�h�X�{��
		}

		printf("��J���l�B�G");
		scanf("%lf", &balance);
		printf("��J�����`���O�G");
		scanf("%lf", &totalCharges);
		printf("��J�����`�H���B�G");
		scanf("%lf", &totalCredits);
		printf("��J�H���B�סG");
		scanf("%lf", &creditLimit);

		// �p��s�l�B
		newBalance = balance + totalCharges - totalCredits;

		// �ˬd�s�l�B�O�_�W�L�H���B��
		printf("�b�ḹ�X�G%d\n", accountNumber);
		printf("�H���B�סG%.2f\n", creditLimit);
		printf("�l�B�G%.2f\n", newBalance);

		if (newBalance > creditLimit) {
			printf("�H���B�פw�W�X�C\n");
		}

		printf("\n");
	}

	return 0;
}
