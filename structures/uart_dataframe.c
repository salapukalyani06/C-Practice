#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint8_t parity_enable : 1;
    uint8_t parity_type   : 1;
    uint8_t reserved      : 6;
} UART_Control;

int count_ones(uint8_t data)
{
    int count = 0;

    for (int i = 0; i < 7; i++)
    {
        if (data & (1 << i))
        {
            count++;
        }
    }

    return count;
}

uint8_t create_uart_frame(uint8_t data, UART_Control *ctrl)
{
    data = data & 0x7F;

    if (ctrl->parity_enable == 0)
    {
        return data;
    }

    int ones = count_ones(data);
    int parity_bit;

    if (ctrl->parity_type == 0)
    {
        parity_bit = (ones % 2 == 0) ? 0 : 1;
    }
    else
    {
        parity_bit = (ones % 2 == 0) ? 1 : 0;
    }

    return (parity_bit << 7) | data;
}

int main()
{
    uint8_t data = 7;

    uint8_t parity_enable = 1;
    uint8_t parity_type = 0;

    UART_Control ctrl;

    ctrl.parity_enable = parity_enable;
    ctrl.parity_type = parity_type;

    uint8_t frame = create_uart_frame(data, &ctrl);

    printf("frame = 0x%02X", frame);

    return 0;
}
