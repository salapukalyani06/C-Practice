#include <stdio.h>
#include <stdint.h>

typedef union {
    uint32_t value;
    uint8_t bytes[4];
} Register;

void modify_and_print(uint32_t input, uint8_t b1, uint8_t b2)
{
    Register reg;
    reg.value = input;

    reg.bytes[1] = b1;
    reg.bytes[2] = b2;

    printf("%lu\n", (unsigned long)reg.value);
}

int main(void)
{
    uint32_t num = 0;
    uint8_t b1 = 1;
    uint8_t b2 = 2;

    modify_and_print(num, b1, b2);
    return 0;
}
