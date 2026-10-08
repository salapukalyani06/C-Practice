#include <stdio.h>

void reverse_array(int *ptr, int n)
{
    int *start = ptr;
    int *end = ptr + n - 1;

    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    int n = 5;

    int arr[100] = {10, 20, 30, 40, 50};

    reverse_array(arr, n);

    for(int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

        if(i < n - 1)
        {
            printf(" ");
        }
    }

    return 0;
}
