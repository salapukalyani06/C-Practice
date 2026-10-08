#include <stdio.h>
#include <stdint.h>

typedef union
{
    struct
    {
        uint8_t enable    : 1;
        uint8_t mode      : 2;
        uint8_t interrupt : 1;
        uint8_t reserved  : 4;
    } bits;

    uint8_t reg;
} ControlRegister;

int main()
{
    uint8_t e = 1;
    uint8_t m = 2;
    uint8_t i = 1;

    ControlRegister ctrl = {0};

    ctrl.bits.enable = e;
    ctrl.bits.mode = m;
    ctrl.bits.interrupt = i;

    printf("%u", ctrl.reg);

    return 0;
}
