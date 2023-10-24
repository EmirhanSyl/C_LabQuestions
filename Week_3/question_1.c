#include <stdio.h>

int main() {
    int *pointer;
    int i = 5;
    pointer = &i;

    printf("pointer %d", *pointer);
    return 0;
}