#include <stdio.h>

void reverse_array(int arr[], int n)
{
    int i = 0, j = n - 1;

    while (i < j)
    {
        int temp = arr[i];

        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    int n = 5;

    int arr[100] = {10, 20, 30, 40, 50};

    reverse_array(arr, n);

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
