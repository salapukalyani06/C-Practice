#include <stdio.h>
#include <stdint.h>

uint16_t spread_bits(uint8_t val)
{
    uint16_t result = 0;

    for(int i = 0; i < 8; i++)
    {
        uint8_t bit = (val >> i) & 1;
        result |= (bit << (2 * i));
    }

    return result;
}

int main()
{
    uint8_t val = 15;

    uint16_t result = spread_bits(val);

    printf("%u", result);

    return 0;
}
