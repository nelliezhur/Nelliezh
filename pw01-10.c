#include <stdio.h>
#define NODE_ID 168

void handshake() {
    printf("PING-PONG-PING:%d\n", NODE_ID);
}

void pong() {
    handshake();
}

void ping() {
    pong();
}

int main() {
    int packet_size = 4;
    int total_transfer = packet_size * 3;

    ping();
    printf("PING-PONG-PING:%d\n", total_transfer * 42);
    printf("SESSION:CLOSED\n");
    
    return 0;
}
