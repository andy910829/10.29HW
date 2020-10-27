#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, f;
	while (a != -1)
	{
	printf("enter account number,enter -1 to end\n");
	scanf_s("%d", &a);
	
	printf("enter begining balance\n");
	scanf_s("%f", &b);

	printf("enter total charges\n");
	scanf_s("%f", &c);

	printf("enter total credits\n");
	scanf_s("%f", &d);

	printf("enter credits limit\n");
	scanf_s("%f", &e);

	
		f = b + c - d;
		printf("balance %f\n", f);
		{
			if (f > e);
			printf("credit limit exceeded\n");
		}
	}


}