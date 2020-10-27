#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, a;
	for(int i=1;i<=5;i++)
	{
		for (j = 5; j >i; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");

		}
		printf("\n");
	}
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j < i + 1; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 9 - 2 * i; j++)
		{
			printf("*");
		}

		printf("\n");

	}
}
	
