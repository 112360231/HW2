#include <stdio.h>

int main() {
	double x,y,salary;
	

	while (1) {
		
		printf("enter # of hours worked (-1 µ²§ô): ");
		scanf("%lf", &x);

		if (x == -1) {
			break; 
		}

		
		printf("enter hourly rate of the worked($00.00) ");
		scanf("%lf", &y);

		
		

		salary =  x * y;

		
		printf("salary is $%.2f\n\n", salary);
	}

	return 0;
}
