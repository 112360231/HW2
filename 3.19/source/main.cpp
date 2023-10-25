#include <stdio.h>

int main() {
	double principal, rate, interest;
	int days;

	while (1) {
		
		printf("輸入貸款本金 (-1 結束): ");
		scanf("%lf", &principal);

		if (principal == -1) {
			break; 
		}

		
		printf("輸入年利率: ");
		scanf("%lf", &rate);

		
		printf("輸入貸款天數: ");
		scanf("%d", &days);

		
		interest = (principal * rate * days) / 365.0;

		
		printf("利息費用為 $%.2f\n\n", interest);
	}

	return 0;
}
