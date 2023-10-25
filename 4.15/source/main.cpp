#include <stdio.h>
#include <math.h>

int main() {
	double principal = 5000.0;
	int years = 15;

	printf("Year\tInterest Rate\tAmount on Deposit\n");

	for (double rate = 10.0; rate <= 12.0; rate += 0.5) 
	{
		double amount = principal * pow(1.0 + rate / 100.0, years);

		printf("%d\t%.2lf%%\t        %.2lf\n", years, rate, amount);
	}

	return 0;
}
