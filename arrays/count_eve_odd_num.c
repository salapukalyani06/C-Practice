#include <stdio.h>

int main()
{
    int arr[] = {10, 15, 20, 7, 8, 11};
    int n = 6;

    int even = 0;
    int odd = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);

    return 0;
}
