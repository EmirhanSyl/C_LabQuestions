#include <stdio.h>
#include <stdlib.h>

int function(int *number)
{
    (*number)++;
}

int main()
{
    int N = 5;
    // An array
    int arr[] = {1, 2, 3, 4, 5};
    // Declare pointer variable
    int *ptr;
    // Point the pointer to first element in array arr[]
    ptr = arr;
    // Traverse array using ptr
    for (int i = 0; i < N; i++)
    {
        // Print element at which ptr points
        printf("%d ", ptr[0]);
        ptr++;
    }
    

    function(&N);
    printf("%d", N);
    int *p1, *p2;
    p1 = (int *)malloc(sizeof(int));
    p2 = (int *)malloc(sizeof(int));
}