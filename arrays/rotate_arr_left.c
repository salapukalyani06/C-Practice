#include <stdio.h>

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];

        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void rotate_left(int arr[], int n, int k)
{
    k = k % n;

    reverse(arr, 0, k - 1);

    reverse(arr, k, n - 1);

    reverse(arr, 0, n - 1);
}

int main()
{
    int n = 5;
    int k = 2;

    int arr[100] = {10, 20, 30, 40, 50};

    rotate_left(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

        if(i < n - 1)
        {
            printf(" ");
        }
    }

    return 0;
}
