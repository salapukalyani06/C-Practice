#include<stdio.h>
int main(void)
{
	int x = 40;
	int *p = &x;
	printf("value of x is : %d\n",x);
	printf("address of x is : %p\n",(void *)&x);
	printf("value of p is : %d\n",*p);
	printf("address of p is : %p\n",(void *)p);
	return 0;
}
