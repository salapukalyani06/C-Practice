#include <stdio.h>

int is_alternating_pattern(int *mem, int k)
{
    int *curr = mem;
    int expected = *curr;

    for (int i = 0; i < k; i++)
    {
        if (*curr != expected)
        {
            return 0;
        }

        expected = 1 - expected;
        curr++;
    }

    return 1;
}

int main()
{
    int n = 6;
    int k = 6;

    int arr[100] = {1, 0, 1, 0, 1, 0};

    int res = is_alternating_pattern(arr, k);

    printf("%d", res);

    return 0;
}
