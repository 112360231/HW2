#include <stdio.h>

int main() {
	double principal, rate, interest;
	int days;

	while (1) {
		
		printf("��J�U�ڥ��� (-1 ����): ");
		scanf("%lf", &principal);

		if (principal == -1) {
			break; 
		}

		
		printf("��J�~�Q�v: ");
		scanf("%lf", &rate);

		
		printf("��J�U�ڤѼ�: ");
		scanf("%d", &days);

		
		interest = (principal * rate * days) / 365.0;

		
		printf("�Q���O�ά� $%.2f\n\n", interest);
	}

	return 0;
}
