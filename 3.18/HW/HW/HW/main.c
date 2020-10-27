#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a=0,b;
	while (a!=-1)
	{
		printf("enter sales in dollars (-1 to end)\n");
		scanf_s("%f", &a);
		if (a == -1) { break; };
		b = a * 0.09 + 200;
		printf("salary is:%.2f\n", b);
	}
}