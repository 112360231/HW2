#include <stdio.h>

int main() {
	double grossSales, salary;

	while (1) {
		
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%lf", &grossSales);

		if (grossSales == -1) {
			break;
		}

		
		salary = 200.0 + (0.09 * grossSales);

		
		printf("Salary is: $%.2f\n", salary);
	}

	return 0;
}
