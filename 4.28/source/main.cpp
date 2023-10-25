#include <stdio.h>

int main() {
	int payCode;
	double weeklyPay;

	while (1) {
		printf("�п�J���u���u��{���]1���g�z�A2���p�ɤu�A3�������u�A4���s�u�A-1�h�X�^�G ");
		scanf("%d", &payCode);

		if (payCode == -1) {
			break; // �p�G��J-1�A�h�X�{��
		}

		switch (payCode) {
		case 1: // �g�z
			printf("�п�J�g�z���C�g�T�w�u��G $");
			scanf("%lf", &weeklyPay);
			break;
		case 2: // �p�ɤu
			printf("�п�J�p�ɤu���C�p�ɤu��G $");
			double hourlyWage;
			scanf("%lf", &hourlyWage);
			printf("�п�J�p�ɤu���u�@�ɼơG ");
			int hoursWorked;
			scanf("%d", &hoursWorked);
			if (hoursWorked <= 40) {
				weeklyPay = hourlyWage * hoursWorked;
			}
			else {
				weeklyPay = hourlyWage * 40 + hourlyWage * 1.5 * (hoursWorked - 40);
			}
			break;
		case 3: // �����u
			printf("�п�J�����u���C�g�`�P���B�G $");
			double totalSales;
			scanf("%lf", &totalSales);
			weeklyPay = 250.0 + (0.057 * totalSales);
			break;
		case 4: // �s�u
			printf("�п�J�s�u���C�󪫫~���T�w���B�G $");
			double pieceRate;
			scanf("%lf", &pieceRate);
			printf("�п�J�s�u�Ͳ������~�ƶq�G ");
			int itemsProduced;
			scanf("%d", &itemsProduced);
			weeklyPay = pieceRate * itemsProduced;
			break;
		default:
			printf("�L�Ī��u��{���C�п�J���Ī��u��{���C\n");
			continue; 
		}

		printf("�C�g�u��G $%.2lf\n", weeklyPay);
	}

	return 0;
}
