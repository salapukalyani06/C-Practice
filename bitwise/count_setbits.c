#include <stdio.h>

int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    unsigned int n = 13;
    printf("%d\n", countSetBits(n));
    return 0;
}
