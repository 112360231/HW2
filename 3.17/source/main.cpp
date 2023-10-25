#include <stdio.h>

int main() {
	int accountNumber;
	double balance, totalCharges, totalCredits, creditLimit, newBalance;

	while (1) {
		// 輸入客戶數據
		printf("輸入帳戶號碼（輸入-1退出）：");
		scanf("%d", &accountNumber);

		if (accountNumber == -1) {
			break; // 如果輸入-1，退出程式
		}

		printf("輸入月初餘額：");
		scanf("%lf", &balance);
		printf("輸入本月總消費：");
		scanf("%lf", &totalCharges);
		printf("輸入本月總信用額：");
		scanf("%lf", &totalCredits);
		printf("輸入信用額度：");
		scanf("%lf", &creditLimit);

		// 計算新餘額
		newBalance = balance + totalCharges - totalCredits;

		// 檢查新餘額是否超過信用額度
		printf("帳戶號碼：%d\n", accountNumber);
		printf("信用額度：%.2f\n", creditLimit);
		printf("餘額：%.2f\n", newBalance);

		if (newBalance > creditLimit) {
			printf("信用額度已超出。\n");
		}

		printf("\n");
	}

	return 0;
}
