#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr;
    // int ptr= {1, 2, 3, 4, 5};
    // int ptr= {2, 3, 4, 5};
    // int ptr= {3, 4, 5};
    ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", ptr[i]);
        ptr++;
    }
}