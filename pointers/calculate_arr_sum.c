#include <stdio.h>

int calculate_sum(int *ptr, int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    return sum;
}

int main()
{
    int n = 5;

    int arr[100] = {10, 20, 30, 40, 50};

    int result = calculate_sum(arr, n);

    printf("%d", result);

    return 0;
}
