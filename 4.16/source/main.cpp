#include <stdio.h>

int main() {
	int i, j;


	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	printf("\n");
	for (int i = 9; i >= 0; i--)
	{
		for (int j = i; j >=0 ; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j <= 8-i; j++)
		{
			printf(" ");
		}
		for (int j = i; j >= 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 0; j <= 9-i ; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}