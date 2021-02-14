#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>
int main(void)
{
	int letter=0;
	string s = get_string("name: ");
	for (int i=0,n=strlen(s); i<n; i++)
	{
		if (isalpha(s[i]))
		{
			letter++;
		}
	}
	printf("%i letter(s)\n",letter);
}
