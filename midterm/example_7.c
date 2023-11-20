#include <stdio.h>

int main() {

    void *p1;
    int a = 5;
    float b = 5.5;

    p1 = (void *)&a;
    p1 = &b;

    printf("%f", *(float *)p1 );
    return 0;
}