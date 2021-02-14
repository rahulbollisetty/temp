#include <stdio.h>
int main(void)
{
	printf("enter 4 digits \n");
	int a, b, c, d, i;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a > b && a > c && a > d)
	{
		i = 1;
	}
	else if (b > a && b > c && b > d)
	{
		i = 2;
	}
	else if (c > a && c > d && c > a)
	{
		i = 3;
	}
	else

		{
			i = 4;
		}
		switch (i)
		{
			case 1:
			printf("a is greater\n");
			break;
			case 2:
			printf("b is greater\n");
			break;
			case 3:
			printf("c is greater\n");
			break;
			case 4:
			printf("d is greater\n");
			break;
		}

}
