#include <stdio.h>
#include <stdint.h>

uint8_t is_bit_set(uint8_t reg, uint8_t pos)
{
    reg &= (1 << pos);

    if(reg)
    {
        return 1;
    }

    return 0;
}

int main()
{
    uint8_t reg = 10;
    uint8_t pos = 3;

    printf("%u", is_bit_set(reg, pos));

    return 0;
}
