#include <stdio.h>

typedef struct
{
    unsigned short reg;
} ConfigRegister;

int validate_config(ConfigRegister *cfg)
{
    unsigned short value = (*cfg).reg;

    if ((value & 0x0001) == 0)
        return 0;

    unsigned short priority = (value >> 2) & 0x03;

    if (priority == 0x03)
        return 0;

    if ((value & 0xFFF0) != 0)
        return 0;

    return 1;
}

int main()
{
    ConfigRegister cfg;

    cfg.reg = 0x0005;

    int result = validate_config(&cfg);

    printf("%d", result);

    return 0;
}
