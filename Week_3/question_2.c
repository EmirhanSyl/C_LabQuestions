#include <stdio.h>
#include <stdlib.h>

int main() {

    void *generic = malloc(sizeof(int));
    int i = 5;
    generic = &i;
    printf("generic pointer value = %d", *((int *)generic));
    return 0;
}