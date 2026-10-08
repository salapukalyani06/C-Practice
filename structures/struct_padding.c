#include <stdio.h>
#include <stddef.h>

typedef struct
{
    char a;
    int b;
    short c;
} MyStruct;

void print_offsets()
{
    printf("Offset of a: %lu\n", offsetof(MyStruct, a));
    printf("Offset of b: %lu\n", offsetof(MyStruct, b));
    printf("Offset of c: %lu\n", offsetof(MyStruct, c));
    printf("Size: %lu", sizeof(MyStruct));
}

int main()
{
    print_offsets();

    return 0;
}
