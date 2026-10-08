#include <stdio.h>
#include <stdint.h>

#define SET_BIT(r, bp)   ((r |= (1 << bp)))
#define CLEAR_BIT(r, bp) ((r &= ~(1 << bp)))
#define TOGGLE_BIT(r, bp) ((r ^= (1 << bp)))

uint8_t modify_register(uint8_t reg)
{
    SET_BIT(reg, 2);
    SET_BIT(reg, 7);
    CLEAR_BIT(reg, 3);
    TOGGLE_BIT(reg, 5);

    return reg;
}

int main()
{
    uint8_t reg = 0;

    printf("%u", modify_register(reg));

    return 0;
}
