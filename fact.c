#include <stdio.h>
#include <cs50.h>
#include <math.h>
int count(int y);
int main(void)
{
	/* code */
	

	int t = get_int("input test cases");
	for (int i = 0; i < t; ++i)
		{
			/* code */
			int n = get_int("input number");
			int sum = 0;
			int a = n%10;
			sum = sum + a;
			int x = count(n);
			printf("%d\n", x);
			a = n/pow(10,x-1);
			sum = sum + a;
			printf("sum of first %d\n",sum);
		}	

	
}

int count(int y)
{
	int c =0;
	int a = y;
	while(a>0)
	{
		a=a/10;
		c++;
	}
	return c;
}
