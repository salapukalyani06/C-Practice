#include <stdio.h>
#include <stdint.h>

uint8_t count_set_bits(uint8_t reg) {
    uint8_t count = 0;
    while (reg) {
        count += reg & 1;
        reg >>= 1;
    }
    return count;
}

int main() {
    uint8_t reg = 255;
    printf("%u", count_set_bits(reg));
    return 0;
}
