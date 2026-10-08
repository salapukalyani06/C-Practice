#include <stdio.h>

unsigned char modifyBit(unsigned char reg, int pos, int mode)
{
    if(mode == 1)
    {
        reg |= (1 << pos);
    }
    else
    {
        reg &= ~(1 << pos);
    }

    return reg;
}

int main()
{
    unsigned char reg = 5;
    int pos = 1;
    int mode = 1;

    printf("%d", modifyBit(reg, pos, mode));

    return 0;
}
