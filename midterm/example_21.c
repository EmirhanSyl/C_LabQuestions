#include <stdio.h>
#include <stdlib.h>

typedef enum days{
    MONDAY,
    TUESDAY,
    WADNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
}days;

int main() {
    days D = FRIDAY;

    printf("%d\n", D);
    return 0;
}