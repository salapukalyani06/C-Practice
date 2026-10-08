#include<stdio.h>
int main()
{
	int n;
	printf("enter thr number: \n");
	scanf("%d",&n);

	if(n>0 && (n & (n-1)) == 0)
	{
		printf("power of 2 %d\n",n);
	}
	else
	{
		printf("not a power of 2 %d\n",n);
	}
	return 0;
}

