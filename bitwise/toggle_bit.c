#include <stdio.h>

int toggleFifthBit(int n)
{
    n ^= (1 << 5);
    return n;
}

int main()
{
    int n = 10;

    printf("%d", toggleFifthBit(n));

    return 0;
}
