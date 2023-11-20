#include <stdio.h>

int main() {
    int *a = NULL;
    int numbers[] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == 5)
        {
            *a = 5;
        }   
    }

    if (a == NULL)
    {
        /* code */
    }

    printf("Hello, World!\n");
    return 0;
}