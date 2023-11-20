#include <stdio.h>


int changeValue(int a){
    a++;
}

int realChangeValue(int *a)
{
    (*a)++;
}

int main() {
    int x = 5;
    int y = 5;
    changeValue(x);
    realChangeValue(&y);
    printf("%d\n", x);
    printf("%d\n", y);
    return 0;
}