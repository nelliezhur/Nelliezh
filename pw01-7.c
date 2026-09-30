#include <stdio.h>

void load_mem() {
    printf("BOOT:MEM_OK");
}

void load_cpu() {
    printf("|CPU_OK:END\n");
}

int main() {
    load_mem();
    load_cpu();
    return 0;
}
