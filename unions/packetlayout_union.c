#include <stdio.h>
#include <stdint.h>

typedef union {
    struct {
        uint8_t start;
        uint8_t command;
        uint16_t data;
        uint8_t crc;
        uint8_t end;
    } fields;
    uint8_t raw[6];
} Packet;

void build_and_print_packet(uint8_t s, uint8_t c, uint16_t d,
                            uint8_t crc, uint8_t e)
{
    Packet p;

    p.fields.start = s;
    p.fields.command = c;
    p.fields.data = d;
    p.fields.crc = crc;
    p.fields.end = e;

    for (int i = 0; i < 6; i++) {
        printf("%u", (unsigned int)p.raw[i]);

        if (i < 5) {
            printf(" ");
        }
    }
}

int main(void)
{
    uint8_t s = 170;
    uint8_t c = 1;
    uint16_t d = 4660;
    uint8_t crc = 85;
    uint8_t e = 255;

    build_and_print_packet(s, c, d, crc, e);
    return 0;
}
