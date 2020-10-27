#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a=0, b, c, d;
	while (a!=-1)
	{	
		printf("enter total principal\n");
		scanf_s("%f", &a);
		if (a == -1) { break; }
		printf("enter interest rate\n");
		scanf_s("%f", &b);
		printf("enter term of the loan days\n");
		scanf_s("%f", &c);
		d = a * b*c / 365;
		printf("tne interest charge is:%.2f", d);
	}
}