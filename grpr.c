#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isprime(long long n);
bool truncatable(long long n);

int main(void)
{
	FILE *file = fopen("largeprimer.txt", "a");
	long long x = 2;
	while(x < 9999999)
	{
		if (truncatable(x))
		{
			fprintf(file, "%lld \n", x);
		}
		x++;
	}
	fclose(file);

}
bool isprime(long long n)
{
	
	if (n%2 == 0 || n%3 == 0)
	{
		return false;
	}
	for (int i = 5; i*i < n; i = i + 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return false;
		}
	}
	return true;
}
bool truncatable(long long z)
{
	long long tmp = z;
	int len = 0;
	while (tmp !=0)
    {
        len ++;
        tmp /= 10;
    }
	tmp = z;
    while (tmp != 0) {

        if (isprime(tmp) != true) {

            return false;
        }

        tmp /= 10;
    }
    tmp = z;
    while(len > 1 )
    {
    	
        int y = tmp % (int)pow(10, len-1);

        if (isprime(y) != true) 
        {
            return false;
        }
    	

        len--;
    }
    return true;

	
}


