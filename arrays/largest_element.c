#include<stdio.h>
int main()
{
	int arr[] = {40,90,80,60,30,100};
        int n = sizeof(arr)/sizeof(arr[0]);
	int max = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("Maximum : %d\n",max);
	return 0;
}
