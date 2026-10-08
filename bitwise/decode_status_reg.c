#include <stdio.h>
#include <stdint.h>

const char *flag_names[8] = {
    "Power On",
    "Error",
    "Tx Ready",
    "Rx Ready",
    "Overheat",
    "Undervoltage",
    "Timeout",
    "Reserved"
};

void decode_status(uint8_t status_reg)
{
    for(int i = 0; i < 8; i++)
    {
        if(status_reg & (1U << i))
        {
            printf("%s\n", flag_names[i]);
        }
    }
}

int main()
{
    uint8_t reg = 15;

    decode_status(reg);

    return 0;
}
