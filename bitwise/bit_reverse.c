#include <stdio.h>
#include <stdint.h>

uint8_t reverse_bits(uint8_t val) {
    uint8_t result = 0;

    for (int i = 0; i < 8; i++) {
        result <<= 1;

        result |= (val & 1);

        val >>= 1;
    }

    return result;
}

int main() {
    uint8_t val = 13;

    uint8_t result = reverse_bits(val);
    printf("%u", result);
    return 0;
}
