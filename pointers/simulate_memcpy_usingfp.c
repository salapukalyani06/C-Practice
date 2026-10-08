#include <stdio.h>

void simulate_memcpy(int *dest, int *src, int n)
{
    while (n--)
    {
        *dest++ = *src++;
    }
}

int main()
{
    int n = 5;

    int src[100] = {10, 20, 30, 40, 50};
    int dest[100];

    simulate_memcpy(dest, src, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d", dest[i]);

        if (i < n - 1)
        {
            printf(" ");
        }
    }

    return 0;
}
