#include<stdio.h>
int main()
{
	int arr[] = {10,20,30,40,50};
	int n = 5;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum = sum + arr[i];
	}
	printf("sum = %d\n",sum);
	return 0;
}
