#include <stdio.h>


int main()
{
    int a = 6;
    int *p;
    p = &a;
    *p = 10;
    printf("%d", a);
    return 0;
}