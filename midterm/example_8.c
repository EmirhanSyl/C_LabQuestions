#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *memory = malloc(sizeof(int));
    int *ptr = (int *)memory;
    *ptr = 20;
    printf("%d\n", *ptr);
    free(memory);
    return 0;
}