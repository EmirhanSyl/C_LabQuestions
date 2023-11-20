#include <stdio.h>

int main() {

    int numbers[] = {1,8,3,5,5};
    int *arrPtr = numbers;
    //printf("%p\n", numbers);
    //printf("%d\n", *(arrPtr+5));

    arrPtr++;
    arrPtr--;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(++arrPtr));
    }
    
    return 0;
}