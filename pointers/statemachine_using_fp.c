#include <stdio.h>

void state_init()
{
    printf("Init");
}

void state_load()
{
    printf("Load");
}

void state_execute()
{
    printf("Execute");
}

void state_exit()
{
    printf("Exit");
}

void run_state_sequence(int start)
{
    void (*fsm[4])() =
    {
        state_init,
        state_load,
        state_execute,
        state_exit
    };

    for (int i = 0; i < 3; i++)
    {
        int index = (start + i) % 4;

        fsm[index]();

        if (i < 2)
        {
            printf("\n");
        }
    }
}

int main()
{
    int start = 1;

    run_state_sequence(start);

    return 0;
}
