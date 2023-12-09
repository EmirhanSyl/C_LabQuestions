#include <stdio.h>
#include <stdlib.h>

int *createArr(int N){
    int *p = calloc(N, sizeof(int));

    for (int i = 0; i < N; i++)
    {
        p[i] = i+1;
    }
    
    return p;
}

int main() {

    int *p = createArr(5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }
    
    
    return 0;
}