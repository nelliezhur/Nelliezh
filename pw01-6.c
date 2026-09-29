#include <stdio.h>
#define SEC_IN_HOUR 3600

int main() {
    int age = 18;
    int days = age * 365;
    long hours = (long)days * 24;
    long long seconds = hours * SEC_IN_HOUR;

    printf("Тики: %lld|Часы: %ld|Дни: %d|Годы: %d\n", seconds, hours, days, age);
    return 0;
}
