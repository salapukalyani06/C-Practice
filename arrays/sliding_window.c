#include <stdio.h>

void sliding_window_sum(int arr[], int n, int k)
{
    for (int i = 0; i <= n - k; i++)
    {
        int sum = 0;

        for (int j = i; j < i + k; j++)
        {
            sum += arr[j];
        }

        printf("%d", sum);

        if(i < n - k)
        {
            printf(" ");
        }
    }
}

int main()
{
    int n = 5;
    int k = 3;

    int arr[100] = {10, 20, 30, 40, 50};

    sliding_window_sum(arr, n, k);

    return 0;
}
