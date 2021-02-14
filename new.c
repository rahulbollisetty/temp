#include <stdio.h>

int main() {
	
	int i;
	char c;
	
	
		
	printf("enter number ");
	scanf("%d", &i);


	printf("enter character ");
	scanf(" %c", &c);
if (i >= 97 && i <= 122 )
{

	printf("%c\n", i);
}
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{printf("%d\n", c);
}

}
