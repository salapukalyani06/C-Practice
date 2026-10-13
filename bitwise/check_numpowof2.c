#include <stdio.h>
#include <stdint.h>

const char* is_power_of_two(uint32_t n) {
    if (n > 0 && (n & (n - 1)) == 0)
        return "YES";
    else
        return "NO";
}

int main() {
    uint32_t n = 16;

    const char* result = is_power_of_two(n);
    printf("%s", result);
    return 0;
}
