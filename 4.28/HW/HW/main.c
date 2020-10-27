#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 0, b, c, d, e, f, g, h, i;
	printf("enter your code\n");
	scanf_s("%d", &a);

	switch (a) {
	case 1:
	{
		b = 100000;
		printf("your salary is:%d\n", b);
	}
	break;
	case 2:
	{
		printf("enter how many hours do you work a week\n");
		scanf_s("%d", &c);
		if (c < 40)
		{
			d = c * 158;
			printf("your salary is:%d\n", d);
		}
		else
		{
			e = d + (c - 40) * 158 * 1.5;
			printf("your salary is:%d\n", e);
		}
		break;
	case 3:
	{
		printf("enter your gross weekly sale\n");
		scanf_s("%d", &f);
		g = 250 + f * 0.057;
		printf("your salary is:%d\n", g);
	}
	break;
	case 4:
	{
		printf("enter how many items you product\n");
		scanf_s("%d", &h);
		i = 20 * h;
		printf("your salary is;%d\n", i);
	}

	}
	}

