#include <stdio.h>

int validate_checksum(int *mem, int n)
{
    int *ptr = mem;
    int xor_result = 0;

    for (int i = 0; i < n - 1; i++)
    {
        xor_result ^= *ptr;
        ptr++;
    }

    int checksum = *ptr;

    return xor_result == checksum ? 1 : 0;
}

int main()
{
    int n = 5;
    int arr[100] = {10, 20, 30, 40, 40};

    int result = validate_checksum(arr, n);

    printf("%d", result);

    return 0;
}
