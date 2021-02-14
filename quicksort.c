#include <stdio.h>
int part(int a[],int lb,int ub);
int quick(int a[],int lb,int ub);
int main(void)
{
	int n;
	scanf("%d",&n);
	int a[n];
	printf("enter array\n");
	for (int i = 0; i < n; ++i)
	{
		/* code */
		scanf("%d",&a[i]);
	}

	quick(a,0,n-1);
	


}
/*
int part(int a[],int lb,int ub)
{
	int pivot=a[lb];
	int start=lb;
	int end=ub;
	while ()
}
*/
int quick(int a[],int lb,int ub){
	printf("%d %d\n",lb,ub);
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		printf("|%d|", a[i]);
	}
return 0;
}




