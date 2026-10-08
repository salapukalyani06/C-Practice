#include <stdio.h>

int add_two_void_pointers(void *a, void *b)
{
    int *ptr1 = (int *)a;
    int *ptr2 = (int *)b;

    return *ptr1 + *ptr2;
}

int main()
{
    int x = 10;
    int y = 20;

    int result = add_two_void_pointers(&x, &y);

    printf("%d", result);

    return 0;
}
