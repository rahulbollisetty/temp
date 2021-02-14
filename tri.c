#include <stdio.h>
#include <cs50.h>
int main (void)
{
	int r, m = 0;
	for (r = 5; r >= 1; r--)
	{
	for (int i = 1; i <= r; i++)
	{
		printf("%d", i);
	}

	for (int s = 0; s < m; s++)
	{
		printf(".");
	}

	for (int j = r; j >= 1; j--)
	{
		printf("%d", j);
	}
	printf("\n");
	m = m + 2;
	}
}
