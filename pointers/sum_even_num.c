#include <stdio.h>

int sum_even_numbers(int *ptr, int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        if((*(ptr + i)) % 2 == 0)
        {
            sum += *(ptr + i);
        }
    }

    return sum;
}

int main()
{
    int n = 6;

    int arr[100] = {10, 15, 20, 7, 8, 11};

    int result = sum_even_numbers(arr, n);

    printf("Sum = %d", result);

    return 0;
}
