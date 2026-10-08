#include <stdio.h>
#include <stdint.h>

uint32_t set_bits(uint32_t reg, uint8_t pos, uint8_t len)
{
    for(int i = 0; i < len; i++)
    {
        reg |= (1 << pos);
        pos++;
    }

    return reg;
}

int main()
{
    uint32_t reg = 0;
    uint8_t pos = 2;
    uint8_t len = 4;

    printf("%u", set_bits(reg, pos, len));

    return 0;
}
