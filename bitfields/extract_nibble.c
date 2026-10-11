#include <stdio.h>

unsigned char extractLowerNibble(unsigned char reg)
{
    return reg & 0x0F;
}

unsigned char extractUpperNibble(unsigned char reg)
{
    return (reg >> 4) & 0x0F;
}

int main()
{
    unsigned char reg = 0xAB;

    printf("Lower nibble = %u\n", extractLowerNibble(reg));
    printf("Upper nibble = %u\n", extractUpperNibble(reg));

    return 0;
}
