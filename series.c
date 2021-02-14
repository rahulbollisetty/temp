#include <stdio.h>
int main(void)
{
	float s = 0, fac = 1, x =1;
	for (int i = 1; i <= 3; i++)
	{
		s = x;
		for (int j = i; j >= 1; j--)
		{
			fac = fac * j;
		}
		s = s + 1 / fac;
	}
	printf("%f", s);	
}
