#include <stdio.h>

int main() {
    
    int size;
    int array[50];

    printf("Array size: ");
    scanf("%d ", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}