#include <stdio.h>

int find_pattern(int *mem, int n)
{
    int *p1 = mem;
    int *p2 = mem + 1;
    int *p3 = mem + 2;

    for (int i = 0; i <= n - 3; i++)
    {
        if (*p1 + 1 == *p2 && *p2 + 1 == *p3)
        {
            return i;
        }

        p1++;
        p2++;
        p3++;
    }

    return -1;
}

int main()
{
    int n = 6;

    int arr[100] = {10, 20, 30, 5, 6, 7};

    int res = find_pattern(arr, n);

    printf("%d", res);

    return 0;
}
