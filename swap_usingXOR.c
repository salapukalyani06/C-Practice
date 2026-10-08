#include<stdio.h>
int main()
{
	int a=9,b=12;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a : %d\n",a);
	printf("b : %d\n",b);
}
