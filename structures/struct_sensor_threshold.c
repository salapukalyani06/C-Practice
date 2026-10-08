#include <stdio.h>
#include <stdint.h>

struct Sensor
{
    char name[10];
    uint8_t value;
};

void print_above_threshold(struct Sensor sensors[],
                           uint8_t n,
                           uint8_t threshold)
{
    for (uint8_t i = 0; i < n; i++)
    {
        if (sensors[i].value >= threshold)
        {
            printf("%s %u\n",
                   sensors[i].name,
                   sensors[i].value);
        }
    }
}

int main()
{
    uint8_t n = 4;
    uint8_t threshold = 50;

    struct Sensor sensors[100] =
    {
        {"Temp", 45},
        {"Light", 75},
        {"Pressure", 60},
        {"Voltage", 30}
    };

    print_above_threshold(sensors, n, threshold);

    return 0;
}
