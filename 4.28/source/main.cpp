#include <stdio.h>

int main() {
	int payCode;
	double weeklyPay;

	while (1) {
		printf("請輸入員工的工資程式（1為經理，2為小時工，3為佣金工，4為零工，-1退出）： ");
		scanf("%d", &payCode);

		if (payCode == -1) {
			break; // 如果輸入-1，退出程式
		}

		switch (payCode) {
		case 1: // 經理
			printf("請輸入經理的每週固定工資： $");
			scanf("%lf", &weeklyPay);
			break;
		case 2: // 小時工
			printf("請輸入小時工的每小時工資： $");
			double hourlyWage;
			scanf("%lf", &hourlyWage);
			printf("請輸入小時工的工作時數： ");
			int hoursWorked;
			scanf("%d", &hoursWorked);
			if (hoursWorked <= 40) {
				weeklyPay = hourlyWage * hoursWorked;
			}
			else {
				weeklyPay = hourlyWage * 40 + hourlyWage * 1.5 * (hoursWorked - 40);
			}
			break;
		case 3: // 佣金工
			printf("請輸入佣金工的每週總銷售額： $");
			double totalSales;
			scanf("%lf", &totalSales);
			weeklyPay = 250.0 + (0.057 * totalSales);
			break;
		case 4: // 零工
			printf("請輸入零工的每件物品的固定金額： $");
			double pieceRate;
			scanf("%lf", &pieceRate);
			printf("請輸入零工生產的物品數量： ");
			int itemsProduced;
			scanf("%d", &itemsProduced);
			weeklyPay = pieceRate * itemsProduced;
			break;
		default:
			printf("無效的工資程式。請輸入有效的工資程式。\n");
			continue; 
		}

		printf("每週工資： $%.2lf\n", weeklyPay);
	}

	return 0;
}
