#include <stdio.h>
#include <stdint.h>

uint8_t clear_bit(uint8_t reg, uint8_t pos)
{
    reg &= ~(1 << pos);
    return reg;
}

int main()
{
    uint8_t reg = 15;
    uint8_t pos = 2;

    uint8_t result = clear_bit(reg, pos);

    printf("%u", result);

    return 0;
}
