#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int execute_command(int a, int b, int cmd)
{
    int (*operations[4])(int, int) = { add, sub, mul, divide };

    return operations[cmd](a, b);
}

int main()
{
    int a = 20;
    int b = 5;
    int cmd = 2;

    int result = execute_command(a, b, cmd);

    printf("%d", result);

    return 0;
}
