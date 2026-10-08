#include <stdio.h>

int find_max_element(int *ptr, int n)
{
    int max = *ptr;

    for(int i = 1; i < n; i++)
    {
        if(*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }

    return max;
}

int main()
{
    int n = 6;

    int arr[100] = {10, 45, 23, 67, 12, 34};

    int result = find_max_element(arr, n);

    printf("%d", result);

    return 0;
}
