#include <stdio.h>

void on_button()
{
    printf("Button Pressed");
}

void on_timer()
{
    printf("Timer Expired");
}

void on_uart()
{
    printf("UART Received");
}

void on_power()
{
    printf("Power On");
}

void on_error()
{
    printf("Error Detected");
}

void handle_event(int event_code)
{
    void (*event_table[5])() =
    {
        on_button,
        on_timer,
        on_uart,
        on_power,
        on_error
    };

    if (event_code >= 0 && event_code < 5)
    {
        event_table[event_code]();
    }
    else
    {
        printf("Unhandled Event");
    }
}

int main()
{
    int event = 2;

    handle_event(event);

    return 0;
}
