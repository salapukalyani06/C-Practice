#include <stdio.h>
#include <stdint.h>

uint16_t highest_set_bit(uint16_t reg)
{
    if(reg == 0)
    {
        return 0;
    }

    uint16_t result = 1U << 15;

    while((reg & result) == 0)
    {
        result = result >> 1;
    }

    return result;
}

int main()
{
    uint16_t reg = 40;

    uint16_t result = highest_set_bit(reg);

    printf("%hu", result);

    return 0;
}
