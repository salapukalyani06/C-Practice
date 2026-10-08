#include <stdio.h>
#include <stdint.h>

#define SET_ENABLE(x)  ((x & 0x01) << 0)
#define SET_MODE(x)    ((x & 0x03) << 1)
#define SET_SPEED(x)   ((x & 0x07) << 3)

uint16_t build_register(uint8_t enable, uint8_t mode, uint8_t speed)
{
    uint16_t reg = 0;

    reg |= SET_ENABLE(enable);
    reg |= SET_MODE(mode);
    reg |= SET_SPEED(speed);

    return reg;
}

int main()
{
    uint8_t enable = 1;
    uint8_t mode = 2;
    uint8_t speed = 5;

    uint16_t reg = build_register(enable, mode, speed);

    printf("%u", reg);

    return 0;
}
