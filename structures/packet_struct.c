#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint8_t start;
    uint8_t command;
    uint16_t data;
    uint8_t crc;
    uint8_t end;
} Packet;

void print_packet_fields(uint8_t *buffer)
{
    Packet *pkt = (Packet *)buffer;

    printf("Start: %u\n", pkt->start);
    printf("Command: %u\n", pkt->command);
    printf("Data: %u\n", pkt->data);
    printf("CRC: %u\n", pkt->crc);
    printf("End: %u", pkt->end);
}

int main()
{
    uint8_t buffer[6] = {170, 1, 52, 18, 85, 255};

    print_packet_fields(buffer);

    return 0;
}
