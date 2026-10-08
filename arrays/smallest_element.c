#include<stdio.h>
int main()
{
	int arr[] = {40,5,8,30,70,1,80};
	int n = sizeof(arr)/sizeof(arr[0]);
	int min = arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("minimum : %d\n",min);
	return 0;
}
