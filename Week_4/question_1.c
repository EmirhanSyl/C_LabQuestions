#include <stdio.h>

int main()
{
    int numbers[] = {1, 2, 3, 4};
    int *p = numbers;
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < length; i++)
    {
        (*p)++;
        p++;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", numbers[i]);
    }

    
    return 0;
}