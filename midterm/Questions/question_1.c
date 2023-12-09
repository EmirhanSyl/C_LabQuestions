#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[] = {1,2,3};
    int *p = calloc(3, sizeof(int));
    //int *p = malloc(3 * sizeof(int));

    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
    {
        p[i] = arr1[i];
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", p[i]);
    }
    

    return 0;
}