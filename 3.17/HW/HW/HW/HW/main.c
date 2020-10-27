#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a = 0;
	float  b, c, d, e, f;
	
	while (a!=-1)
	{	
		printf("enter account number,enter -1 to end\n");
		scanf_s("%d", &a);
		if (a == -1) { break; }
		printf("enter begining balance\n");
		scanf_s("%f", &b);
		printf("enter total charges\n");
		scanf_s("%f", &c);
		printf("enter total credits\n");
		scanf_s("%f", &d);
		printf("enter credits limit\n");
		scanf_s("%f", &e);

		f=b+c-d;
		
			if (f> e)
			{
			printf("account %d\n", a);
			printf("credit limit %f\n", e);
			printf("balance %.2f\n", f);
			printf("credit limit exceeded\n"); 
			}	
	}

}