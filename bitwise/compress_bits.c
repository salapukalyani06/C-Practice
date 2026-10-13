#include <stdio.h>
#include <stdint.h>

uint8_t compress_bits(uint16_t val) {
    uint8_t result = 0;

    for (int i = 0; i < 8; i++) {
        uint8_t bit = (val >> (2 * i)) & 1;

        result |= (bit << i);
    }

    return result;
}

int main() {
    uint16_t val = 21845;

    uint8_t result = compress_bits(val);
    printf("%u", result);
    return 0;
}
