#include <stdio.h>
int main(void)
{
	printf("enter range");
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++)
	{
		int f = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				f++;
			}
		}
		if (f == 2)
		{
			printf("%d is prime\n", i);
			
		}
		else
		{
			printf("%d is not prime\n", i);
		
		}
	
	}
}
