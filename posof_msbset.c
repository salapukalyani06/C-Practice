#include<stdio.h>
int main()
{
	unsigned int n=40;
	int pos=31;
	while((n & (1U << pos)) == 0)
	{
		pos--;
	}
	printf("msb position : %d\n",pos);
	return 0;
}

