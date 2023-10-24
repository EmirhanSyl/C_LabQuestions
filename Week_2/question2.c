#include <stdio.h>

int printArray(int arr[], int length)
{
    printf("[");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");

    return 0;
}

int main() {
    int arr[] = {1, 2, 3};
    int length = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, length);
    return 0;
}

