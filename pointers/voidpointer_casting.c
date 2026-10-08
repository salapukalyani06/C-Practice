#include <stdio.h>

void add_and_print(void *a, void *b, char type)
{
    if (type == 'i')
    {
        int result = (*(int *)a) + (*(int *)b);

        printf("%d", result);
    }
    else if (type == 'f')
    {
        float result = (*(float *)a) + (*(float *)b);

        printf("%.1f", result);
    }
}

int main()
{
    char type = 'i';

    if (type == 'i')
    {
        int x = 10;
        int y = 20;

        add_and_print(&x, &y, type);
    }
    else if (type == 'f')
    {
        float x = 10.5;
        float y = 20.5;

        add_and_print(&x, &y, type);
    }

    return 0;
}
