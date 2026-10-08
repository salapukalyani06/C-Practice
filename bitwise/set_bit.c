#include <stdio.h>
#include <stdint.h>

uint8_t set_bit(uint8_t reg, uint8_t pos)
{
    reg |= (1 << pos);
    return reg;
}

int main()
{
    uint8_t reg = 5;
    uint8_t pos = 1;

    uint8_t result = set_bit(reg, pos);

    printf("%u", result);

    return 0;
}
