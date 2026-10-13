#include <stdio.h>
#include <stdint.h>

uint8_t is_circular_match(uint16_t reg, uint16_t target) {
    for (int i = 0; i < 16; i++) {
        if (reg == target) return 1;
        reg = (reg << 1) | (reg >> 15);
    }
    return 0;
}

int main() {
    uint16_t reg = 1, target = 32768;
    printf("%hhu", is_circular_match(reg, target));
    return 0;
}
