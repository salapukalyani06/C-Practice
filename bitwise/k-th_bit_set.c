#include <stdio.h>

int isKthBitSet(int n, int k)
{
    n &= (1 << k);

    if(n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n = 10;
    int k = 1;

    printf("%d", isKthBitSet(n, k));

    return 0;
}
