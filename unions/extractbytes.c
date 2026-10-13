#include <stdio.h>
#include <stdint.h>

typedef union {
    uint32_t value;
    uint8_t bytes[4];
} Register;

void print_bytes(uint32_t input) {
    Register reg;
    reg.value = input;

    for (int i = 0; i < 4; i++) {
        printf("%u", reg.bytes[i]);
        if(i < 3){
            printf(" ");
        }
    }
}
 
int main() {
    uint32_t num = 305419896;
    print_bytes(num);
    return 0;
}
